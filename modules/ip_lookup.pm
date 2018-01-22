package modules::ip_lookup;
print " [+] - loading module ip_lookup\n";
sub init {
	$main::data{modules}{ip_lookup}{option} = 'i';
}
sub start	{
	print "[*] - Starting ip_lookup\n";
	print "[+] - OTX key is available\n" if &modules::otx_key::check_key_exists();
	return &menu;
}
sub menu	{
	my $exit_flag = 0;
	while ($exit_flag == 0)	{
		print "[=] - ------------------------------\n";
		print "[M] - OTX Menu ---------------------\n";
		print "[=] - ------------------------------\n";
		print "	[a] - Activate OTX\n";
		print "	[s] - Speedtest\n";
		print "	[i] - Get IP\n";
		print "	[q] - Exit\n";
		print "[?] - >";
		my $choice = <STDIN>;
		chomp $choice;
		if ($choice =~ /s/) {
			modules::otx::speed_test();
		}	elsif ($choice =~ /i/)	{
			modules::otx::get_ip_tealeus();
		}	elsif ($choice =~ /a/)	{
			modules::otx::start();
		}	elsif ($choice =~ /q/)	{
			$exit_flag++;
		} else	{
			print "[X] - not implemented";
		}
	}
}
