package modules::quit;
print "[+] - loading module quit\n";
sub init 	{
	$main::data{modules}{quit}{option} = "Q";
}
sub start	{
	print "are you sure you wish to quit? (yes/no)\n>";
	my $answer = <STDIN>;
	chomp $answer;
	if ( $answer =~ /yes/)	{
		&main::destroy;
	} else	{
		return;
	}
}
