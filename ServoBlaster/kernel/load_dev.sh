#!/bin/bash

module="servoblaster"
mode="664"

if [ "$1" == 'load' ] 
then
    echo "load modules"
    if [ -z "$2" ] 
    then
	insmod ./servoblaster.ko
    else
	insmod ./servoblaster.ko mypins="$2"
    fi
    major=`grep -P "servoblaster" /proc/devices | grep -oP "\d{3}"`
    echo $major
    mknod -m $mode /dev/servoblaster c $major 0
    chown servob:servob /dev/servoblaster

elif [ "$1" == 'unload' ] 
then
    echo "unloading modules \n"
    rmmod servoblaster
    rm -f /dev/servoblaster
fi



