package modules::otx_key;
print " [+] - loading module OTX_key\n" if $main::debug;
sub check_key_exists	{
	if ( -e $main::data{config}{otx_key_file} )	{
		print "[+] - OTX key file exists\n" if $main::debug;
		return 1;
	} else {
		print "[-] - OTX key file does not exist\n" if $main::debug;
		return 0;
	}
}
sub load_key	{
	print "[*] - Loading OTX key\n";
	print "[-] - No OTX key available\n" unless (&check_key_exists());
	return unless (-e $main::data{config}{otx_key_file});
	open( OTX_KEY_FILE, "<", $main::data{config}{otx_key_file} ) or die "couldn't open otx keyfile";
	my $key = <OTX_KEY_FILE>;
	chomp $key;
	close OTX_KEY_FILE;
	$main::data{config}{otx_key} = $key;
	print "[+] - Loaded OTX key\n";
}
sub get_key	{
	return $main::data{config}{otx_key};
}
sub init	{
	$main::data{menu}{main}{otx_key}   =       {
        	option => "O",
        	name => "OTX KEY TOOL",
        	description => "Module for configuring your OTX api key",
	};
	$main::data{config}{otx_key_file} = $ENV{"HOME"}."/.otx.api.key";
}
sub create_key	{
        unless ( check_key_exists() )  {
		print "[*] - please enter you key to make this config file ".$main::data{config}{otx_key_file}."\n";
		print "[?] - OTX API KEY:>";
		my $otx_api_key = <STDIN>;
		chomp $otx_api_key;
		print "[*] - you have entered this as a key -> $otx_api_key\n";
		open (OTX_KEY_FILE, '>', $main::data{config}{otx_key_file}) or die "could not open $!";
		print OTX_KEY_FILE $otx_api_key;
		close OTX_KEY_FILE;
		print "[+] - OTX key file made successfully\n";
        }
}
sub start	{
        print "[!] - No OTX key file.\n" unless (&check_key_exists());
	&create_key() unless (&check_key_exists());
	load_key();
	print "Options: d delete, v to view, anything else to exit\n>";
	my $choice = <STDIN>;
	chomp $choice;
	if ($choice =~ d)	{
		print "[-] - Deleting OTX config\n";
		unlink $main::data{config}{otx_key_file};
		print "[-] - File deleted!\n";
	} elsif	($choice =~ v)	{
		print "[!] - OTX Key: ".get_key()."\n";
	}
        return;
}
return 1;
