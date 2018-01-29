package modules::display;
use Exporter 'import';
use Data::Dumper;
print "[*] loading display module.\n";
@EXPORT = qw(ouut ouut_string ouut_menu ouut_line ouut_clear ouut_title ouut_quest ouut_menu_action);
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
#	* severity: [debugv,debug,info,warn,error]	this is the severity of the message
#	* source:	where this message is coming from
#	* tab: 		this is how many spaces in front for hierarchy
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
	my $decoration_front = "|";
	my $decoration_pre_1 = ">[".$san_input{logo}."] - ";
	my $decoration_pre_2 = " | > - ";
	my $decoration_post  = "[]";
	my $tabs = $san_input{tab};
	while ( $tabs > 0)	{
		$tabs_out .= "-";
		$tabs --;
	}
	my $available_size_line_1 = $main::data{config}{screen_width} - (length($tabs_out) + length($decoration_front) + length($decoration_pre_1) + length($decoration_post));
	my $available_size_line_2 = $main::data{config}{screen_width} - (length($tabs_out) + length($decoration_front) + length($decoration_pre_2) + length($decoration_post));
	$output = time()." - ".$san_input{severity}." - ".$san_input{source}." -> ".$san_input{message};
	if (length($output) > $available_size_line_1)	{
		$output =~ s/^(.{1,$available_size_line_1})//s;
		print $decoration_front.$tabs_out.$decoration_pre_1.$1.$decoration_post."\n";
		while (length($output) > 0)	{
			$output =~ s/^(.{1,$available_size_line_2})//s;
			my $this_line = $1;
			for (1..($available_size_line_2 - length($this_line)))	{
				$this_line .= " ";
			}
			print $decoration_front.$tabs_out.$decoration_pre_2.$this_line.$decoration_post."\n";
		}
	} else	{
		for(1..($available_size_line_1 - length($output))) 	{
			$output .= " ";
		}
		print $decoration_front.$tabs_out.$decoration_pre_1.$output.$decoration_post."\n";
	}
}

sub ouut_clear	{
	return system("clear");
}

sub ouut_title	{	
	my $input = shift;
	$input =~ s/ /-/g;
	my $decoration_front = "|[]";
	my $decoration_back  = "-[]";
	my $length = length($input);
	my $filler_size = $main::data{config}{screen_width} - (length($input) + length($decoration_front) + length($decoration_back));
	my $line = $decoration_front;
	$line .= "-" if (($filler_size % 2 ) and ($filler_size --) ); #then i go and check that the length is even and add a space on the left side and subtract 1
	for (1..($filler_size/2))	{
		$line .= "-";
	}
	$line .= "$input";
	for (1..($filler_size/2))	{
		$line .= "-";
	}
	$line .= $decoration_back."\n";
	print $line;
}

sub ouut_line	{
	my $decoration_front = "|[]";
	my $decoration_back  = "-[]";
	my $output = $decoration_front;
	my $filler = $main::data{config}{screen_width} -(length($decoration_front) + length($decoration_back));
	for(1..$filler)	{
		$output .= "-";
	}
	$output .= $decoration_back."\n";
	print $output;
}

sub ouut_quest	{
	my $tab = shift || 0;
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
	ouut_title("$which_menu MENU");
	for (keys $main::data{menu}{$which_menu})	{
		my $menu_item = $_;
		print "|-> ".$main::data{menu}{$which_menu}{$menu_item}{option}." : ".$main::data{menu}{$which_menu}{$menu_item}{name}."\n";
	}
}

sub ouut_menu_action	{
	my $menu = shift;
	my $menu_selection = shift;
	my $output;
	for (keys $main::data{menu}{$menu})	{
		my $menu_item = $_;
		if ($main::data{menu}{$menu}{$menu_item}{option} =~ $menu_selection)	{
			$output = "module::".$menu_item."::".$main::data{menu}{$menu}{$menu_item}{trigger}; 
		}
	}
	return $output;
}	

1;
