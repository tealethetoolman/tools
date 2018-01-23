package modules::display;
use Exporter 'import';
use Data::Dumper;
&ouut( source => 'display', message => "loading module", tab => 1, severity => 'debug' );
@EXPORT = qw(ouut ouut_string ouut_menu ouut_line ouut_clear ouut_quest);
$main::data{menu}{main}{display}	=	{
	option => "d",
	name => "DISPLAY",
	description => "Module for configuring display and looking at runtime variables",
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

sub ouut_quest	{
	my $tab = shift;
	my $output = "| ";
	$output .= " " while $tab > 0;
	$output .= "[?] - > ";
	print $output;
	my $input = <STDIN>;
	print "\n";
	chomp $input;
	return $input;
}

sub ouut_menu 	{
	my $input = shift;
	for (keys $input)	{
		$my_hash = $_;
		print "-> ".Dumper($my_hash)." <- \n";
	print "-> ".$my_hash." | ".$_." <- \n";
#		for (keys $_)	{
#			print "key: ".$_
#		}
#		print ",,,".$_."...\n";
	}
	#ouut(message => &Dumper($input), source => 'display::ouut_menu', logo => '#');	
#        for (keys %input)       {
#		print $_;
#        ;	ouut(message => "problem is here ".&Dumper($input{@{$_}}{option}), source => 'display::ouut_menu', logo => '#');
#        }
#	for (@_)	{print $_."\n";}
#	}

#	my (%input) = @_;
# going to use our %data structure to maintain menu hierarchies
# the top level menu will be $data{modules}
#        print "[M] - Main Menu\n";
#	my $module = &ouut_quest(2);
#	 my $module = <STDIN>;
#        my $choice_validity = 0;
#        chomp $module;
#	&main::destroy if $module =~ /q/;
#        for (keys %data{modules})       {
#                if ($module =~ /$data{modules}{$_}{option}/)    {
#                        print "[*] - you chose $_ by pressing $module!\n" if $debug ==1;
#                        $choice_validity ++;
#                        my $start_function = '&modules::'.$_.'::start()';
#                        eval $start_function;
#                        last;
#                }
#        }
#        print "[X] - Invalid Module\n" unless $choice_validity >=1;
print "sleeeping \n";
sleep 1;
}

sub dump_config	{
	        my (%params) = @_;
		print &Dumper(%params)."\n-------------\n";
}
1;
