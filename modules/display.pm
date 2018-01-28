package modules::display;
use Exporter 'import';
use Data::Dumper;
print "[*] loading display module.\n";
@EXPORT = qw(ouut ouut_string ouut_menu ouut_line ouut_clear ouut_title ouut_quest);
$main::data{menu}{main}{display}	=	{
	option => "d",
	name => "DISPLAY",
	description => "Module for configuring display and looking at runtime variables",
};
$main::data{config}{screen_width} = 80;
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

#here is some screen sizing magic
	my (%params) = @_;
	my %san_input =	(
		color => ($params{color}||"white"),
		logo  =>($params{logo}||"*") ,
		message  => ($params{message}||"alert with no message"),
		severity  => ($params{severity}||"debug"),
		source  => ($params{source}||"Anonymous"), 
		tab  => ($params{tab}||0)
	);
	my $output;
	my $tabs_out;
	my $decoration_pre_1 = " [".$san_input{logo}."] - ";
	my $decoration_pre_2 = " >|";
	my $decoration_post  = "[]";
	my $tabs = $san_input{tab};
	while ( $tabs > 0)	{
		$tabs_out .= " ";
		$tabs --;
	}
	my $available_size_line_1 = $main::data{config}{screen_width} - (length($tabs_out) + length($decoration_pre_1) + length($decoration_post));
	my $available_size_line_2 = $main::data{config}{screen_width} - (length($tabs_out) + length($decoration_pre_2) + length($decoration_post));
	$output = time()." - ".$san_input{severity}." - ".$san_input{source}." -> ".$san_input{message};
	print "tabs out =|".$tabs_out."|\n";
	print "decorations pre 1 ".$decoration_pre_1."\n";
	print "decorations pre 2 ".$decoration_pre_2."\n";
	print "decorations post ".$decoration_post."\n";
	print "available size first line ". $available_size_line_1 ."\n";
	print "available size next lines ". $available_size_line_2 . "\n";
	print "full output: ". $output . "\n";
	print "output size: ". length($output) . "\n";
	sleep 10;
	if (length($output) > $available_size_line_1)	{
		$output =~ s/^(.{$available_size_line_1})//;
		print "just regexed the first oversized line. the output is : ".$1."\n";
		print $tabs_out.$decoration_pre_1.$1.$decoration_post."\n";
	sleep 10;
#		while ((length($output) >= $available_size_line_2) and length($output) != 0)	{
		while (length($output) > 0)	{
			$output =~ s/^(.{$available_size_line_2})//;
			print "just regexed the next line. out put is: ".$1."\n and the remaining size is ". length($output) . "\n";
			print $tabs_out.$decoration_pre_2.$1.$decoration_post."\n";
			sleep 10;
		}
	} else	{
		print $tabs_out.$decoration_pre_1.$output.$decoration_post."\n";
	}
}

sub ouut_clear	{
	return system("clear");
}

sub ouut_title	{	
	my $screen_width = 78; # this isn't the actual width, just the width that I made in ouut_line
	my $input = shift;
	ouut( message => "input => $input", source=>'display::ouut_title', severity => 'debugv');
	$input =~ s/ /-/g; # replace spaces with -
	my $length = length($input);
	ouut( message => "length => $input", source=>'display::ouut_title', severity => 'debugv');
	my $filler_size = $screen_width - $input;
	ouut( message => "screen: $screen_width math ". ($screen_width - $length ). " end ", source=>'display::ouut_title', severity => 'debugv');
	ouut( message => "filler size: $filler_size Length: $length Screen WIdth $screen_width.....", source=>'display::ouut_title', severity => 'debugv');
	my $line = "|-"; # ip put a single hyphen in there so that i have an equal length on both the front and back
	$line .= "-" if (($filler_size % 2 ) and ($filler_size --) ); #then i go and check that the length is even and add a space on the left side and subtract 1
	for (1..($filler_size/2))	{
		$line .= "-";
	}
	$line .= "$input";
	for (1..($filler_size/2))	{
		$line .= "-";
	}
	$line .= "[]\n";
	print $line;
}
sub ouut_line	{
	print "|[]-----------------------------------------------------------------------------[]\n";
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
	my $which_menu = shift;
	my $output_line;
	for (keys $main::data{menu}{$which_menu})	{
		ouut_title("MAIN MENU");
		my $menu_item = $_;
		print "-> ".$main::data{menu}{$which_menu}{$menu_item}{option}." : ".$main::data{menu}{$which_menu}{$menu_item}{name}."\n";
	}
}

sub dump_config	{
	        my (%params) = shift;
		print &Dumper(%params)."\n-------------\n";
}
1;
