package modules::otx_key;
use modules::display;
ouut(message => "loading module OTX_key", severity => "debug", source => "modules::otx_key",logo => "+", tab => 2);
$main::data{menu}{main}{otx_key}   =       {
option => "O",
name => "OTX KEY TOOL",
description => "Module for configuring your OTX api key",
module => "otx_key",
trigger => \&start
};
$main::data{menu}{otx_key}	=	{
	create_key =>	{
		option => "c",
		name => "Create",
		description => "use this to create your otx keyfile",
		trigger => \&create_key
	},
	delete_key =>	{
		option => "d",
		name => "Delete",
		description => "use this to delete your otx keyfile",
		trigger => \&delete_key
	},
	view_key =>	{
		option => "v",
		name => "View",
		description => "use this to view your otx keyfile",
		trigger => \&view_key
	}
};

	$main::data{config}{otx_key_file} = $ENV{"HOME"}."/.otx.api.key";
sub check_key_exists	{
	if ( -e $main::data{config}{otx_key_file} )	{
		ouut(message => "OTX key file exists", severity => "debug", source => "modules::otx_key::check_key_exists",logo => "*", tab => 2);

		return 1;
	} else {
		ouut(message => "OTX key file does not exist", severity => "debug", source => "modules::otx_key::check_key_exists",logo => "*", tab => 2);
		return 0;
	}
}
sub load_key	{
	ouut(message => "Loading OTX key", severity => "debug", source => "modules::otx_key::check_key_exists",logo => "*", tab => 2);
	ouut(message => "No OTX key available", severity => "debug", source => "modules::otx_key::load_key",logo => "*", tab => 2) unless (&check_key_exists());
	return unless (-e $main::data{config}{otx_key_file});
	open( OTX_KEY_FILE, "<", $main::data{config}{otx_key_file} ) or ouut(message => "couldn't open otx keyfile", severity => "error", source => "modules::otx_key::load_key",logo => "*", tab => 2);
	my $key = <OTX_KEY_FILE>;
	chomp $key;
	close OTX_KEY_FILE;
	$main::data{config}{otx_key} = $key;
	ouut(message => "Loaded OTX key", severity => "debug", source => "modules::otx_key::load_key",logo => "*", tab => 2);;
}
sub get_key	{
	return $main::data{config}{otx_key};
}
sub create_key	{
        unless ( check_key_exists() )  {
		ouut(message => "please enter you key to make this config file", severity => "info", source => "modules::otx_key::create_key",logo => "*", tab => 2);
		my $otx_api_key = ouut_quest();
		ouut(message => "you have entered this as a key -> $otx_api_key", severity => "info", source => "modules::otx_key::create_key",logo => "*", tab => 2);
		open (OTX_KEY_FILE, '>', $main::data{config}{otx_key_file}) or ouut(message => "could not open $!", severity => "error", source => "modules::otx_key::create_key",logo => "*", tab => 2);
		print OTX_KEY_FILE $otx_api_key;
		close OTX_KEY_FILE;
		ouut(message => "OTX key file made successfully", severity => "info", source => "modules::otx_key::create_key",logo => "*", tab => 2);
        }
}
sub start	{
	ouut(message => "No OTX key file", severity => "info", source => "modules::otx_key::start",logo => "*", tab => 2)unless (&check_key_exists());
	&create_key() unless (&check_key_exists());
	load_key();
	print "Options: d delete, v to view, anything else to exit\n>";
	my $output = ouut_menu("otx_key");
        return $output->();
}

sub delete_key	{
	ouut(message => "Deleting OTX config", severity => "info", source => "modules::otx_key::delete_key",logo => "*", tab => 2);
	unlink $main::data{config}{otx_key_file};
	ouut(message => "File deleted!", severity => "info", source => "modules::otx_key::delete_key",logo => "*", tab => 2);
}

sub view_key	{
	ouut(message => "OTX Key: ".get_key, severity => "info", source => "modules::otx_key::start",logo => "*", tab => 2);
}
1;
