package modules::quit;
use modules::display;
ouut ( message => "loading module quit", tab => 1, logo => '+', severity => "debug", source => "module::quit", color => 'default' );
sub init 	{
	$main::data{modules}{quit}{option} = "q";
}
sub start	{
	if ($main::debug == 1)	{
		print "are you sure you wish to quit? (yes/no)\n>";
		my $answer = <STDIN>;
		chomp $answer;
		if ( $answer =~ /yes/)	{
			&main::destroy;
		} else	{
			return;
		}
	} else	{
		&main::destroy;
	}
}
1;
