/* Copyright (c) 2016 Phoenix Systems
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:
   1. Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.

   THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
   ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
   FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
   DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
   OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
   LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
   OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
   SUCH DAMAGE.*/
   
 #include "syscall.h"
   
 #include <errno.h>
 #include <stdio.h>
 #include <sys/types.h>
   
int initgroups(const char *user, gid_t group)
{
	/* TODO: implement. */
	if(user == NULL) {
		errno = EINVAL;
		return -1;
	}

	return 0;
}

int getgroups(int size, gid_t list[])
{
	int ret = syscall2(int, SYS_GETGROUPS, size, list);
	if(ret < 0) {
		errno = -ret;
		return -1;
	}

	return ret;
}

int setgroups(size_t size, const gid_t *list)
{
	int ret = syscall2(int, SYS_SETGROUPS, size, list);
	if(ret < 0) {
		errno = -ret;
		return -1;
	}

	return ret;
}

struct group *getgrent()
{
	/* TODO: implement. */
	errno = ENOSYS;
	return NULL;
}

void setgrent()
{
	/* TODO: implement. */
}

void endgrent()
{
	/* TODO: implement. */
}

struct group *getgrnam(const char *name)
{
	/* TODO: implement. */
	errno = ENOSYS;
	return NULL;
}

struct group *getgrgid(gid_t gid)
{
	/* TODO: implement. */
	errno = ENOSYS;
	return NULL;
}

int setpgrp(pid_t pid, pid_t pgid)
{
	/* TODO: implement. */
	errno = ENOSYS;
	return -1;
}
