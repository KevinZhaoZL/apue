#include "../include/apue.h"
#include <fcntl.h>
#include <sys/mman.h>

int main(int argc, char *argv[])
{
	int fdin, fdout;
	void *src, *dst;
	struct stat statbuf;

	if (argc != 3)
		err_quit("usage: %s <fromfile> <tofile>", argv[0]);
		
}