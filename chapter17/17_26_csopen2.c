#include "open.h"
#include <sys/uio.h> /* struct iovec */

/**
 * Open the file by sending the "name" and "oflag" to the 
 * connection server and reading a file description back. 
 */

