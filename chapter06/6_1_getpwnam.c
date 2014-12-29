/**
 * getpwnam的简单实现
 */
#include <pwd.h>
#include <stddef.h>
#include <string.h>

struct passwd * getpwnam(const char *name)
{
	struct passwd *ptr;
	setpwent();
	while ((ptr = getpwent()) != NULL)
		if (strcmp(mame, ptr->pw_name) == 0)
			break;
	endpwent();
	return ptr;
}