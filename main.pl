#!/usr/bin/env perl
system("clear");
use Cwd qw(realpath);
use Data::Dumper;
my $bin_path = realpath($0);
$bin_path =~ s/(.*\/)[^\/]*/$1/;
our $lib_path = "${bin_path}modules/";
use lib $lib_path ;
our %data; #this is the main data structure
my $VERSION = 0.1;
my $debug = 0;
$SIG{INT} = \&destroy;
$SIG{TERM} = \&destroy;
sub init()	{
	print "--TEALES UTILITY V:$VERSION--\n";
	print "[*] - Configuring\n" if $debug;
	$data{config}{cleanup} = 0;#0 or 1	
	$data{config}{work_folder} = "/tmp/work";	
	$data{config}{output_file} = time().".out";	
	print "[*] - Loading Modules --\n";
	if (-e "$bin_path/modules")	{
		require modules::quit;
		require modules::otx_key;
		require modules::otx;
		require modules::ip_lookup;
	} else {
		die "error loading modules";
	}
	modules::quit::init();
	modules::otx_key::init();
	modules::otx::init();
	modules::ip_lookup::init();
	return 0;
}

sub setup()	{
	print "[*] - Setting up work directory\n" if $debug;
	if ($data{config}{cleanup} == 1 and -e $data{config}{work_folder})	{
		rmdir $data{config}{work_folder} or warn "Could not delete the workdir $!\n";
		mkdir $data{config}{work_folder};
	} elsif ($data{config}{cleanup} == 0 and -e $data{config}{work_folder})	{
		rename $data{config}{work_folder},"$data{config}{work_folder}.old";
		mkdir $data{config}{work_folder};
	} else	{
		mkdir $data{config}{work_folder};
	}
	print "[=]--------------------\n";
	print "[C] - CONFIG options:\n";
	for (keys %data{config})	{
		print " [>] - $_: $data{config}{$_}\n";
	}
	print "[=]--------------------\n";
}
#this is the subroutine the we use to bring down the program at the end. cleans up. This will be put in a signal handler
sub destroy()	{
	print "Destroying Workspace\n";
	if($data{config}{cleanup} == 1 )	{
		print "Deleting workdir\n";
		rmdir $data{config}{work_folder} or warn "Could not delete the workdir $!\n";
	}
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
print Dumper(%data)." is quite the data. bye!\n" if $debug;
destroy();
