/**
 * 打印进程的id号
 */
#include "../include/apue.h"

 int main(void)
 {
 	printf("hello world from process ID %d\n", getpid());
 	exit(0);
 }