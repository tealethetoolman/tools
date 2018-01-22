package modules::ip_lookup;
print "[+] - loading module ip_lookup\n";
sub init {
	$main::data{modules}{ip_lookup}{option} = 'I';
}
sub start	{
	print "You are now using the ip_lookup module. press any key to quit\n";
	my $option = <STDIN>;
	print "TEALE IS AWESOME!\n" if ($option =~ /(teale|Teale)/);
	return;
}
