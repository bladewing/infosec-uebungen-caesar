#!/bin/bash

# Update package lists
sudo apt-get update

# prevent wireshark from asking for user input
echo "wireshark-common wireshark-common/install-setuid boolean true" | sudo debconf-set-selections
# Install tshark
sudo apt-get install tshark -y

sudo apt-get install git libpcap-dev cmake -y
