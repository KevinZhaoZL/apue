/**
 * 测试能否对标准输入设置偏移量
 */
#include "../include/apue.h"

int main(void)
{
	if (lseek(STDIN_FILENO, 0, SEEK_CUR) == -1) 
		printf("cann't seek\n");
	else
		printf("seek OK\n");
	exit(0);
}