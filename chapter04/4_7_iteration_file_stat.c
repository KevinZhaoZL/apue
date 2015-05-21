#include "../include/apue.h"
#include <dirent.h>
#include <limits.h>

/* function type that is called for each file */
typedef int Myfunc(const char *, const struct *, int);


