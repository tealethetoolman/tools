package modules::ip_lookup;
print "[+] - loading module ip_lookup\n";
sub init {
	$main::data{modules}{ip_lookup}{option} = 'I';
}
sub start	{
	print "[--] - Loaded ip_lookup\n";
	unless ( -e $ENV{"HOME"}."/.otx.api.key" )  {
		print "you need to set up the file ".$ENV{"HOME"}."/.otx.api.key\n";
		print "OTX API KEY:>";
		my $otx_api_key = <STDIN>;
		chomp $otx_api_key;
		print "you have entered this as a key -> $otx_api_key\n";
		open (OTX_KEY_FILE, '>', $ENV{"HOME"}."/.otx.api.key") or die "could not open $!";
		print OTX_KEY_FILE $otx_api_key;
		close OTX_KEY_FILE;
	}
	return;
}
