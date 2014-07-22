#Kernel was copied from Laptop to the testpi SD card
KERNEL_TREE := /home/redge/Documents/raspberrypi/linux
#INSTALL_PATH := /lib/modules/$(shell /bin/uname -r)/kernel/drivers/misc/servoblaster
CROSS_OPTS := ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-

PWD       := $(shell pwd)

obj-m += servoblaster.o

all:	servoblaster.c servoblaster.h
	make ${CROSS_OPTS} -C ${KERNEL_TREE} M=$(PWD) modules

clean:
	make ${CROSS_OPTS} -C ${KERNEL_TREE} M=$(PWD) clean

