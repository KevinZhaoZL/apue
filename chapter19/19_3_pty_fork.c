#include "../include/apue.h"
#include <termios.h>
#ifndef TIOCGWINSZ
#include <sys/ioctl.h>
#endif

pid_t pty_fork(int *ptrfdm, char *slave_name, int slave_namez, 
	const struct termios *slave_termios,
	const struct winsize *slave_winsize) {
	
	
}
