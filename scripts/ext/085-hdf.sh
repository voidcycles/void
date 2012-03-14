#!/bin/bash

# source common configuration settings
source "./common.sh"

# setup pkg definition and resource files
pkg_name="hdf"
pkg_base="hdf5-1.8.8"
pkg_file="$pkg_base.tar.gz"
pkg_url="http://www.hdfgroup.org/ftp/HDF5/current/src/$pkg_file"
pkg_cfg="--disable-shared --enable-static --with-pthread=/usr --with-szlib=$ext_dir/build/szip/$os_name --with-zlib=$ext_dir/build/zlib/$os_name --enable-threadsafe"
pkg_cflags="-I$ext_dir/zlib/include"
pkg_ldflags="-L$ext_dir/zlib/lib/$os_name"
pkg_keep=1

# build and install pkg into external folder
build_pkg $pkg_name $pkg_base $pkg_file $pkg_url $pkg_keep $pkg_cflags $pkg_ldflags $pkg_cfg
