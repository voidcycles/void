#!/bin/bash

# source common configuration settings
source "./common.sh"

####################################################################################################
# setup pkg definition and resource files
####################################################################################################

pkg_name="zlib"
pkg_base="zlib-1.2.6"
pkg_file="$pkg_base.tar.gz"
pkg_url="http://zlib.net/$pkg_file"

pkg_opt="configure:keep"
pkg_cflags=0
pkg_ldflags=0
pkg_cfg="-t -64"

####################################################################################################
# build and install pkg into external folder
####################################################################################################

build_pkg $pkg_name $pkg_base $pkg_file $pkg_url $pkg_opt $pkg_cflags $pkg_ldflags $pkg_cfg


