#include "../include/apue.h"
#include <pthread.h>
#include <syslog.h>

sigset_t mask;

extern int already_running(void);

void 
reread(void)
{

}

void *
thr_fn(void *)
{
	int err, signo;
}
