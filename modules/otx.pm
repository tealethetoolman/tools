package modules::otx;
use WWW::Curl::Easy;
use Time::HiRes qw ( time );
print " [+] - loading module OTX\n";
sub init	{
	$main::data{modules}{otx}{option} = 'X';
}
sub start	{
	print "[*] - Starting OTX\n";
        unless (&modules::otx_key::check_key_exists())  {
        &modules::otx_key::create_key();
	}
        &modules::otx_key::load_key();
}
sub speed_test	{
	print "[*] - Beginning speed test \n";
	my $begin_time;
	my $end_time;
	$begin_time = time();
	my $curl = WWW::Curl::Easy->new;
	$curl->setopt(CURLOPT_HEADER, 1);
	$curl->setopt(CURLOPT_URL, 'http://teale.us');
	for (1..10)	{
		print "  [*] - iteration $_\n" unless ($main::debug eq 0);
		print "  [i] - curl http://www.teale.us\n" unless ($main::debug eq 0);
		my $response_body;
		$curl->setopt(CURLOPT_WRITEDATA, \$response_body);
		my $ret = $curl->perform;
		print("[X] - An error happened: $ret ".$curl->strerror($ret)." ".$curl->errbuf."\n") if ($ret > 0);
	}
	$end_time = time();
	my $total_time = $end_time - $begin_time;
	print "  [+] - Total time: $total_time \n";
	return 1;
}
sub get_ip_tealeus	{
	
	my $curl = WWW::Curl::Easy->new;
	$curl->setopt(CURLOPT_HEADER, 0);
	$curl->setopt(CURLOPT_URL, 'https://teale.us/ip.php');
	my $response_body;
	$curl->setopt(CURLOPT_WRITEDATA, \$response_body);
	my $ret = $curl->perform;
	print("An error happened: $ret ".$curl->strerror($ret)." ".$curl->errbuf."\n") if ($ret > 0);
	print "[+] - IP Address: ".$response_body."\n";
}
