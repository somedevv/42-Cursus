#!/bin/bash

#Architeture
echo "#Architecture: " $(uname -a)
#CPU Cores
echo "#CPU:" $(lscpu | awk 'NR==5 {print $2}')
#VCPU Cores
echo "#vCPU:" $(lscpu | grep Socket\(s\) | awk '{print $2}')
#Memory Usage
free --mega | awk 'NR==2{printf "#Memory Usage: %s/%sMB (%.2f%%)\n", $3,$2,$3*100/$2}'
#Disk Usage
df -h | awk 'NF=="/"{printf "#Disk Usage: %d/%dGB (%s)\n", $3,$2,$5}'
#CPU Load
top -bn1 | grep load | awk '{printf "#CPU Load: %.2f%%\n", $(NF-2)}'
#Last Boot
echo "#Last Boot:" $(who -b | awk ' {printf $3, $4}')
#LVM Use
echo "#LVM Use:" $(pvdisplay | grep Allocatable | awk '{printf $2}')
#TCP Connections
echo "#TCP Connections:" $(ss -s | grep TCP | awk 'NR==2 {printf "%d ESTABILISHED\n", $3}')
#Usr Log
echo "#User Log:" $(who | wc -l)
#Net
echo "#Networks:" $(hostname -I) $(ip a | grep link/ether | awk '{printf " (%s)\n", $2}')
#Sudo commands
echo "#Sudo commands:" $(grep -a 'COMMAND' /var/log/sudo/sudo.log | wc -l)
