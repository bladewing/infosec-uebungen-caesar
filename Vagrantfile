# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|
  config.vm.define "alice" do |alice|
    alice.vm.box = "ubuntu/jammy64"
    alice.vm.hostname = "alice"
    alice.vm.network "private_network", ip: "192.168.56.101", virtualbox__intnet: "internal_<snr>"
    alice.vm.provider "virtualbox" do |vb|
      vb.customize ["modifyvm", :id, "--nicpromisc2", "allow-all"]
      vb.customize ["modifyvm", :id, "--memory", 2048]
    end
    alice.vm.provision "shell", path: "provision_common.sh"
  end

  config.vm.define "bob" do |bob|
    bob.vm.box = "ubuntu/jammy64"
    bob.vm.hostname = "bob"
    bob.vm.network "private_network", ip: "192.168.56.102", virtualbox__intnet: "internal_<snr>"
    bob.vm.provider "virtualbox" do |vb|
      vb.customize ["modifyvm", :id, "--nicpromisc2", "allow-all"]
      vb.customize ["modifyvm", :id, "--memory", 2048]
    end
    bob.vm.provision "shell", path: "provision_common.sh"
  end

  config.vm.define "eve" do |eve|
    eve.vm.box = "ubuntu/jammy64"
    eve.vm.hostname = "eve"
    eve.vm.network "private_network", ip: "192.168.56.103", virtualbox__intnet: "internal_<snr>"
    eve.vm.provider "virtualbox" do |vb|
      vb.customize ["modifyvm", :id, "--nicpromisc2", "allow-all"]
      vb.customize ["modifyvm", :id, "--memory", 2048]
    end
    eve.vm.provision "shell", path: "provision_common.sh"
    eve.vm.provision "shell", path: "provision_eve.sh"
  end
end
