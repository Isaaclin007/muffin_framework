#pragma once

#define _CRT_SECURE_NO_WARNINGS
//external inclusions
# include <stdint.h>	//advanced int typedefs
# include <limits.h>	//advanced type limits defines
# include <tchar.h>		//ANSI, DBCS, or Unicode strings
# include <stdio.h>		//C inherited i/o library
# include <stdlib.h>	//C inherited multi-usage stdlib
//# include <unistd.h>	//C inherited i/o descriptors >> deprecated
# include <fcntl.h>		//C inherited file controls
# include <math.h>		//C inherited maths library

//Project specific inclusions
# include "targetver.h"	//Windows specific header
# include "env.h"		//environement header
# include "indi.h"		//indicators header
# include "utilities.h"	//all other functions

//Malloc related defines
# define IS_INT(x) if (!x) return (0);
# define IS_CHAR(x) if (!x) return (NULL);
# define IS_VOID(x) if (!x) return ;

//Bool related defines
# define True 1
# define False 0

//File descriptor related defines
/*
#define open		_open
#define read		_read
#define write		_write
#define close		_close
#define O_RDONLY	_O_RDONLY
#define O_BINARY	_O_BINARY
#define O_CREAT		_O_CREAT
#define O_WRONLY	_O_WRONLY
#define O_TRUNC		_O_TRUNC
#define S_IREAD		_S_IREAD
#define S_IWRITE	_S_IWRITE
#define S_IFDIR		_S_IFDIR
*/
# define BUFF_SIZE	500000