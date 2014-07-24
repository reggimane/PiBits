#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

int main() 
{
  int fd;
  unsigned int val;
  int result;
  int menu = 0;
  int menu2 =  0;
  unsigned int readval;
  unsigned long * ptr1;
  unsigned long * ptr2;
  unsigned long * ptr3;
  unsigned long * delay;

  
  if ((fd = open("/dev/servoblaster", O_RDWR)) == -1) {
    printf("1. open failed\n");
    return -1;
  }
  
 
  //  write(fd, &val, sizeof(unsigned int));

  //  read(fd, &readval, sizeof(readval));

  /*
  ioctl(fd, LEDCLOCK_PAUSE, 0);
  ioctl(fd, LEDCLOCK_SDDT, &ptr1);
  ioctl(fd, LEDCLOCK_SIDT, &ptr2);
  ioctl(fd, LEDCLOCK_SSNT, &ptr3);
  */


    close(fd);
 



}
