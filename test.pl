#!/usr/bin/env perl
my $text = " this is some text 12 2 3 4 5 6 76 7 sdjkfsjdk somrehting dsihfsjhfds;hfkjghd";
my $screen_size = 10;

if (length($text) > $screen_size)	{
	$text =~ s/^(.{$screen_size})//;
	print "---> ".$1."\n";
	while (length($text) > 0)	{
		$text =~ s/^(.{1,$screen_size})//;
		print $1."\n";
	}
}
