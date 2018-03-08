package modules::otx;
use modules::display;
use WWW::Curl::Easy;
use Time::HiRes qw ( time );
ouut(message => "loading module OTX",source => "modules::otx",severity => "debug",tab=>1, logo => "+");
$main::data{menu}{main}{otx} =    {
    option => "x",
    name => "OTX",
    description => "use this to configure otx",
    trigger => \&start,
    };
$main::data{menu}{otx} =    {
	speed_test =>	{
	option => "s",
	name => "Speed Test",
	description => "use this to test your speed",
	trigger => \&speed_test,
	},
	ip_lookup => {
	option => "i",
	name => "External IP",
	description => "use this to get your external IP",
	trigger => \&get_ip_tealeus,
	}
    };
sub start	{
	ouut(message => "Starting OTX",source => "modules::otx::start",severity => "info",tab=>1, logo => "*");
        unless (&modules::otx_key::check_key_exists())  {
        &modules::otx_key::create_key();
	}
        &modules::otx_key::load_key();
	my $output = ouut_menu('otx');
	return $output->();
}
sub speed_test	{
	ouut(message => "Beginning speed test",source => "modules::otx::speed_test",severity => "info",tab=>1, logo => "*");
	my $begin_time;
	my $end_time;
	$begin_time = time();
	my $curl = WWW::Curl::Easy->new;
	$curl->setopt(CURLOPT_HEADER, 1);
	$curl->setopt(CURLOPT_URL, 'http://teale.us');
	for (1..10)	{
		ouut(message => "curl http://www.teale.us",source => "modules::otx::speed_test",severity => "debug",tab=>1, logo => "*");
		ouut(message => "iteration $_\n",source => "modules::otx::speed_test",severity => "debug",tab=>1, logo => "*");
		my $response_body;
		$curl->setopt(CURLOPT_WRITEDATA, \$response_body);
		my $ret = $curl->perform;
		ouut(message => "An error happened: $ret ".$curl->strerror($ret)." ".$curl->errbuf,source => "modules::otx::speed_test",severity => "error",tab=>1, logo => "X") if ($ret > 0);
ouut(message => "loading module OTX",source => "modules::otx",severity => "debug",tab=>1, logo => "+");
	}
	$end_time = time();
	my $total_time = $end_time - $begin_time;
	ouut(message => "Total time: $total_time",source => "modules::otx::speed_test",severity => "info",tab=>1, logo => "+");
	return 1;
}
sub get_ip_tealeus	{
	
	my $curl = WWW::Curl::Easy->new;
	$curl->setopt(CURLOPT_HEADER, 0);
	$curl->setopt(CURLOPT_URL, 'https://teale.us/ip.php');
	my $response_body;
	$curl->setopt(CURLOPT_WRITEDATA, \$response_body);
	my $ret = $curl->perform;
	ouut(message => "An error occured: $ret ".$curl->strerror($ret)." ".$curl->errbuf,source => "modules::otx::get_ip_tealeus",severity => "error",tab=>1, logo => "X") if ($ret > 0);
	ouut(message => "IP Address: ".$response_body,source => "modules::otx::get_ip_tealeus",severity => "info",tab=>3, logo => "+");
}
