/*

B-Free Project ������ʪ�� GNU Generic PUBLIC LICENSE �˽����ޤ���

GNU GENERAL PUBLIC LICENSE
Version 2, June 1991

(C) B-Free Project.

*/
/* $Source: /cvsroot/bfree-info/B-Free/Program/btron-pc/boot/2nd-opts/console.h,v $
 *
 * $Date: 2011/12/27 17:13:35 $
 * $Author: liu1 $
 *
 *
 * description:
 *
 */

#ifndef __CONSOLE_H__
#define __CONSOLE_H__	1

#define MAX_HEIGHT	24
#define MAX_WIDTH	80

extern void console_clear (void);
extern void write_cr (void);
extern void write_tab (void);
extern int init_console (void);
extern int putchar (int ch);


#endif __CONSOLE_H__

