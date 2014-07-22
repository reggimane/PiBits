#!/bin/bash

module="servoblaster"
mode="664"

if [ $1 == 'load' ]; then
echo "load modules"
insmod ./servoblaster.ko
major=`grep -P "servoblaster" /proc/devices | grep -oP "\d{3}"`
echo $major
mknod -m $mode /dev/servoblaster c $major 0
chown servob:servob /dev/servoblaster

elif [ $1 = 'unload' ]; then
echo "unloading modules \n"
rmmod servoblaster
rm -f /dev/servoblaster
fi



