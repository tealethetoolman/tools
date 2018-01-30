package modules::ip_lookup;
use modules::display;
ouut ( message => "loading ip_lookup", tab => 1, logo => '+', source => "module::ip_lookup" );
$main::data{menu}{main}{ip_lookup} =    {
    option => "i",
    name => "IP_LOOKUP",
    description => "use this to look at your IP address",
    trigger => "menu",
    module => "ip_lookup"
};
sub start	{
	ouut ( message => "Starting ip_lookup",source => "modules::ip_lookup" );
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

1;
