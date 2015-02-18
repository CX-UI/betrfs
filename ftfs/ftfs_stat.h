#ifndef _FTFS_STAT_H
#define _FTFS_STAT_H
#include<linux/statfs.h>
int stat(const char *filename, struct stat *statbuf);
int fstat(unsigned long fd, struct stat *statbuf);
int statfs(const char *name, struct statfs *buf);
int fstatfs(unsigned long fd, struct statfs *buf);
int statvfs64(const char * name, struct statfs *buf);
#endif /* _FTFS_STAT_H */
