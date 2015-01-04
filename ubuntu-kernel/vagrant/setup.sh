#!/bin/sh
set -x
set -e




# add generally required packages
sudo apt-get update
sudo apt-get -y install git-core libncurses5-dev make gcc vim bc

