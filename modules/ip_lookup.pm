package modules::ip_lookup;
use modules::display;
ouut ( message => "loading ip_lookup", tab => 1, logo => '+', source => "module::ip_lookup" );
$main::data{menu}{main}{ip_lookup} =    {
    option => "i",
    name => "IP_LOOKUP",
    description => "use this to look at your IP address",
    trigger => \&menu,
};
$main::data{menu}{ip_lookup} =	{
	ip_lookup => {
		option => "i",
		name => "IP_LOOKUP",
		description => "use this to look at your IP address",
		trigger => \&modules::otx::get_ip_tealeus
	},
	activate => {
		option => "a",
		name => "Activate OTX",
		description => "use this to activate OTX configuration",
		trigger => \&modules::otx::start
	},
	speed_test => {
		option => "s",
		name => "Speedtest",
		description => "use this to do 10 requests",
		trigger => \&modules::otx::speed_test
	}
};
sub menu	{
	ouut ( message => "Starting ip_lookup",source => "modules::ip_lookup" );
	my $output = ouut_menu("ip_lookup");
	return $output->();
}

1;
