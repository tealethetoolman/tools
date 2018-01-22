#!/bin/bash
if (( $EUID != 0 )); then 
echo RUN AS ROOT
exit 
fi
apt install libcurl4-openssl-dev
cd modules/WWW-Curl-4.17/ && make install
cd -
cd modules/libwww-perl-6.31/ && make install
