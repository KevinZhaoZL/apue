#include "../include/apue.h"
#include <stdlib.h>

int main(void) {
	char *ptr;
	size_t size = 200;

	if (chdir("/usr/spool/uucppublic") < 0) {
		err_sys("chdir failed");
	}

	ptr = malloc(size);
	if (getcwd(ptr, size) == NULL) {
		err_sys("getcwd failed");	
	}
	
	printf("cwd = %s\n", ptr);
	free(ptr);
	exit(0);
}
