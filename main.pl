#!/usr/bin/env perl
my %data; #this is the main data structure
my $VERSION = 0.1;
$SIG{INT} = \&destroy;
$SIG{TERM} = \&destroy;
sub init()	{
	print "--TEALES UTILITY V:$VERSION--\n";
	print "CONFIG options:\n";

	$data{config}{cleanup} = 0;#0 or 1	
	$data{config}{work_folder} = "/tmp/work";	
	$data{config}{output_file} = time().".out";	

	for (keys %data{config})	{
		print "$_: $data{config}{$_}\n";
	}
	return 0;
}

sub setup()	{
	print "Setting up work directory\n";
	if ($data{config}{cleanup} == 1 and -e $data{config}{work_folder})	{
		rmdir $data{config}{work_folder} or warn "Could not delete the workdir $!\n";
		mkdir $data{config}{work_folder};
	} elsif ($data{config}{cleanup} == 0 and -e $data{config}{work_folder})	{
		rename $data{config}{work_folder},"$data{config}{work_folder}.old";
		mkdir $data{config}{work_folder};
	} else	{
		mkdir $data{config}{work_folder};
	}
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
	print "This is where the main loop runs\n";
return 0;
}


init();
setup();
main();
destroy();
