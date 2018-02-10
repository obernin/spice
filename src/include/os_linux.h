/*
 *  Generic Linux
 */

#include "os_unix.h"

//----- Enabling flags
#define AVAIL_MFB		/* If the MFB package can work on this system */
#define AVAIL_X11		/* If the X11 Window System can work	*/

//----- System capabilities
#define HAS_ATRIGH		/* acosh( ), asinh( ), atanh( )		*/
#define HAS_BCOPY		/* bcopy( ), bzero( )			*/
#define HAS_BSDDIRS		/* <sys/dir.h>				*/
#define HAS_BSDRANDOM		/* srandom( ) and random( )		*/
#define HAS_BSDRLIMIT		/* getrlimit( ) returns proc limits	*/
#define HAS_BSDRUSAGE		/* getrusage( ) returns cpu usage	*/
#define HAS_BSDSOCKETS		/* <net/inet.h>, socket( ), etc.	*/
#define HAS_DUP2		/* dup2(a, b) for shifting file descrs. */
#define HAS_GETCWD		/* getcwd(buf, size)			*/
#define HAS_INDEX		/* index( ) instead of strchr( )	*/
#define HAS_STDLIB		/* #include <stdlib.h> for libc defs	*/
#define HAS_STRCHR		/* strchr( ) instead of index( )	*/
#define HAS_SYSVDIRS		/* <dirent.h>				*/
#define HAS_SYSVRLIMIT		/* ulimit( ) reports on proc size limit */
#define HAS_SYSVRUSAGE		/* utimes( ) reports on cpu usage	*/
#define HAS_SYSVTIME		/* time( ) returns seconds from 1970	*/
#define HAS_SYSVTTY		/* <termio.h>				*/
#define HAS_TERMCAP		/* tgetxxx( )				*/
#define HAS_TERMREAD		/* Has "read" syscall from terminals	*/

#undef  HAS_UNIX_SEGMENT_HACK
