#!/bin/bash
if [ -f "/home/$USERNAME/.bashrc" ]; then
    echo "the .bashrc file exists in the user home directory."
    echo HELLO=$HOSTNAME >> /home/$USERNAME/.bashrc
    echo LOCAL=whoami >> /home/$USERNAME/.bashrc
    gnome-terminal
    nano /home/$USERNAME/.bashrc
 else 
    echo "the .bashrc file dosnt exist in the user home directory."
 fi    	
