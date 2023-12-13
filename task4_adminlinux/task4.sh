#!/bin/bash
sudo useradd YourName
sudo groupadd FamilyName
sudo usermod -aG FamilyName YourName
if cat /etc/passwd|grep YourName ;then
	echo "username exist"
else
	echo "username not exist"
fi
if cat /etc/group|grep FamilyName;then
	echo "group exist"
else 
	echo "group not exist"
fi
