/*

  Copyright (c) 2003,2004 uim Project http://uim.freedesktop.org/

  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions
  are met:

  1. Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
  2. Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in the
     documentation and/or other materials provided with the distribution.
  3. Neither the name of authors nor the names of its contributors
     may be used to endorse or promote products derived from this software
     without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS'' AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE
  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
  OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
  OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
  SUCH DAMAGE.

*/

#ifndef UIM_FEP_H
#define UIM_FEP_H

#ifdef HAVE_SYS_IOCTL_H
#include <sys/ioctl.h>
#endif
#ifdef HAVE_TERMIOS_H
#include <termios.h>
#endif

#define FALSE 0
#define TRUE 1
#define NONE 2
#define LASTLINE 3
#define BACKTICK 4
#define UNDEFINED -1729
#define ESCAPE_CODE 27
#define WIN_OUT_FILENO STDOUT_FILENO
#define WIN_IN_FILENO  STDOUT_FILENO
#define PROC_FILENO    STDIN_FILENO

extern int g_win_in;
extern int g_win_out;
extern struct winsize *g_win;
void done(int exit_value);

#ifdef DEBUG

#if DEBUG > 2
#define debug2(arg) _debug arg
#define debug(arg) _debug arg
void _debug(const char *fmt, ...);

#elif DEBUG == 2
#define debug2(arg)
#define debug(arg) _debug arg

void _debug(const char *fmt, ...);
#else
#define debug2(arg)
#define debug(arg)
#endif

#define return_if_fail(arg) if (!(arg)) { printf("assertion failed %s %d", __FILE__, __LINE__); return; }

#else
#define debug2(arg)
#define debug(arg)
#define return_if_fail(arg) if (!(arg)) { return; }
#endif

#endif
