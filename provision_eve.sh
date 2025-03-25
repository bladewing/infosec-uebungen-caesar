#!/bin/bash

# Update package lists
sudo apt update

# prevent wireshark from asking for user input
echo "wireshark-common wireshark-common/install-setuid boolean true" | sudo debconf-set-selections
# Install tshark
sudo apt install tshark -y
