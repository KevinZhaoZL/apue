/**
 * 列出一个目录下所有的文件
 */
#include "../include/apue.h"
#include <dirent.h>

int main(int argc, char *argv[]) 
{
	DIR *dp;
	struct dirent *dirp;

	if (argc != 2) 
		err_quit("usage: ls directory name");
	if ((dp = opendir(argv[1])) == NULL) 
		err_sys("can't open %s", argv[1]);
	while ((dirp = readdir(dp)) != NULL) 
		printf("%s\n", dirp->name);

	closedir(dp);
	exit(0);
}