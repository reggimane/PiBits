#include <linux/ioctl.h>

#define SERVOBLASTER_IOC_MAGIC  'k'

/*
SCT = set cycle_ticks
STS = set tick_scale
SDT = set idle_timeout
*/


#define SERVOBLASTER_SCT     _IOW(SERVOBLASTER_IOC_MAGIC, 0, int)
#define SERVOBLASTER_STS     _IOW(SERVOBLASTER_IOC_MAGIC, 1, int)
#define SERVOBLASTER_SDT     _IOW(SERVOBLASTER_IOC_MAGIC, 2, int)

#define SERVOBLASTER_IOC_MAXNR 3

int parse_pins(void);
