/**
 * 用fgets和fputs将标准输入复制到标准输出
 */
#include "../include/apue.h"

int main(void) 
{
	char buf[MAXLINE];
	
	while (fgets(buf, MAXLINE, stdin) != NULL) 
		if (fputs(buf, stdout) == EOF)
			err_sys("output error");
	
	if (ferror(stdin))
		err_sys("input error");

	exit(0);
}