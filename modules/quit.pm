package modules::quit;
use modules::display;
ouut ( message => "loading module quit", tab => 1, logo => '+', severity => "debug", source => "module::quit", color => 'default' );
sub init 	{
	$main::data{modules}{quit} =	{
		option => "q",
		name => "QUIT",
		description => "use this to quit the application"
	};
}
sub start	{
	if ($main::debug =~ 1)	{
		ouut ( message => "are you sure you wish to quit? (yes/no)" );
		my $answer = &ouut_quest(1);
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
