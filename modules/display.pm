package modules::display;
use Exporter 'import';
use Data::Dumper;
&ouut( source => 'display', message => "loading module", tab => 1, severity => 'debug' );
@EXPORT = qw(ouut ouut_string menuu ouut_line ouut_clear);
$main::data{modules}{display}	=	{
	option => "d",
	name => "Display Module",
	descrtiption => "Module for configuring display and looking at runtime variables",
};
sub ouut_string	{
	print shift;
	print "\n";
}
sub ouut	{
#	pass in our hash with info in it
#	fields
#	* color:	this is the color of the output text
#	* logo:		this is what goes between the bracket [*]
#	* message:	this is the message of the alert
#	* severity: [debugv,debug,warn,error]	this is the severity of the message
#	* source:	where this message is coming from
#	* tab: 		this is how many spaces in front for hierarchy
	my (%params) = @_;
	my $output_line = "| ";
	my %san_input =	(
		color => ($params{color}||"white"),
		logo  =>($params{logo}||"*") ,
		message  => ($params{message}||"alert with no message"),
		severity  => ($params{severity}||"debug"),
		source  => ($params{source}||"Anonymous"), 
		tab  => ($params{tab}||0)
	);
	if ($main::debug)	{
		for ( sort (keys %params))	{
			print "$_ -> ".$params{$_}."\n";
		}
	}
	while ( $san_input{tab} > 0)	{
		$output_line .= " ";
		$san_input{tab} --;
	}
	$output_line .="[".$san_input{logo}."] - ".time()." - ".$san_input{severity}." - ".$san_input{source}." -> ".$san_input{message} ."\n";
	print $output_line;
	
}

sub ouut_clear	{
	return system("clear");
}

sub ouut_line	{
	print "|[]----------------------------------------------------------------------------[]\n";
}

sub menu 	{
	my (%input) = @_;
# going to use our %data structure to maintain menu hierarchies
# the top level menu will be $data{modules}

}

sub dump_config	{
	        my (%params) = @_;
		print &Dumper(%params)."\n-------------\n";
}
1;
