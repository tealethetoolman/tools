package modules::quit;
use modules::display;
ouut ( message => "loading module quit", tab => 1, logo => '+', severity => "debug", source => "module::quit", color => 'default' );
$main::data{menu}{main}{quit} =	{
	option => "q",
	name => "QUIT",
	description => "use this to quit the application",
	trigger => \&start
};
sub start	{
	if ($main::debug =~ 1)	{
		ouut ( message => "are you sure you wish to quit? (yes/no)", severity => "info", source => "modules::quit" );		my $answer = &ouut_quest(1);
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
