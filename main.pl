#!/usr/bin/env perl
my $debug = 1;
my $VERSION = 0.1;
use Cwd qw(realpath);
use Data::Dumper;
my $bin_path = realpath($0);
$bin_path =~ s/(.*\/)[^\/]*/$1/;
our $lib_path = "${bin_path}modules/";
use lib $lib_path ;
our %data; #this is the main data structure
ouut_clear();
use modules::display ;
ouut_line();
ouut_string("|---------------------------TEALES UTILITY v:$VERSION-------------------------------[]");
ouut_line();
$SIG{INT} = \&destroy;
$SIG{TERM} = \&destroy;
sub init()	{
	ouut(message => "Initializing", source => 'main::init', severity => 'debugv', logo => '*');
	$data{config}{cleanup} = 0;#0 or 1	
	$data{config}{work_folder} = "/tmp/work";	
	$data{config}{output_file} = time().".out";	
	ouut(message => "Loading Modules", source => 'main::init', severity => 'debug', logo => '*');
	if (-e "$bin_path/modules")	{
		require modules::quit;
		require modules::otx_key;
		require modules::otx;
		require modules::ip_lookup;
	} else {
		ouut(message => "Modules Path not found. Dying", source => 'main::init', severity => 'error', logo => 'X') and destroy();
	}
	modules::quit::init();
	modules::otx_key::init();
	modules::otx::init();
	modules::ip_lookup::init();
	return 0;
}

sub setup()	{
	ouut(message => "Setting up Main Stack", source => 'main::setup', severity => 'debug', logo => '*');
	if ($data{config}{cleanup} == 1 and -e $data{config}{work_folder})	{
		rmdir $data{config}{work_folder} or warn "Could not delete the workdir $!\n";
		mkdir $data{config}{work_folder};
	} elsif ($data{config}{cleanup} == 0 and -e $data{config}{work_folder})	{
		rename $data{config}{work_folder},"$data{config}{work_folder}.old";
		mkdir $data{config}{work_folder};
	} else	{
		mkdir $data{config}{work_folder};
	}
	ouut_line();
	ouut(message => "CONFIGURATIONS:", source => 'main::setup', severity => 'debug', logo => 'C');
	for (keys %data{config})	{
		ouut(message => "$_: $data{config}{$_}", source => ' ', severity => 'debug', logo => '>', tab => 1);
	}
	ouut_line();
}
#this is the subroutine the we use to bring down the program at the end. cleans up. This will be put in a signal handler
sub destroy()	{
	ouut(message => "Destroying Workspace ".shift, source => 'main::destroy', severity => 'error', logo => 'X', tab => 3);
	if($data{config}{cleanup} == 1 )	{
	ouut(message => "Deleting workdir ", source => 'main::destroy', severity => 'error', logo => 'X', tab => 4 );
		rmdir $data{config}{work_folder} or warn "Could not delete the workdir $!\n";
	}
	undef %data;
	exit();
}

sub main()	{
	print "[M] - Main Menu\n";
	for (keys %data{modules})	{
		print " [$data{modules}{$_}{option}] - $_\n"
	}
	print "[?] - >";
	my $module = <STDIN>;
	my $choice_validity = 0;
	chomp $module;
	for (keys %data{modules})	{
		if ($module =~ /$data{modules}{$_}{option}/)	{
			print "[*] - you chose $_ by pressing $module!\n" if $debug ==1;
			$choice_validity ++;
			my $start_function = '&modules::'.$_.'::start()';
			eval $start_function;
			last;
		}
	}
	print "[X] - Invalid Module\n" unless $choice_validity >=1;	
}


init();
setup();
while (1)	{main();}
destroy();
