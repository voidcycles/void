#!/bin/bash

# source common configuration settings
source "./common.sh"

####################################################################################################
# setup pkg definition and resource files
####################################################################################################

pkg_name="libffi"
pkg_base="libffi-3.0.11"
pkg_file="$pkg_base.tar.gz"
pkg_url="http://sourceware.mirrors.tds.net/pub/sourceware.org/libffi/$pkg_file"

pkg_opt="configure:keep:--migrate-raw-headers"
pkg_cflags="-I$ext_dir/zlib/include:-I$ext_dir/iconv/include"
pkg_ldflags="-L$ext_dir/zlib/lib/$os_name:-L$ext_dir/iconv/lib/$os_name:-liconv"
pkg_cfg="--disable-shared --enable-static"

####################################################################################################
# build and install pkg into external folder
####################################################################################################

build_pkg $pkg_name $pkg_base $pkg_file $pkg_url $pkg_opt $pkg_cflags $pkg_ldflags $pkg_cfg
