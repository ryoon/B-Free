/*

B-Free Project ������ʪ�� GNU Generic PUBLIC LICENSE �˽����ޤ���

GNU GENERAL PUBLIC LICENSE
Version 2, June 1991

(C) B-Free Project.

*/
/* $Header: /cvsroot/bfree-info/B-Free/Program/btron-pc/kernel/POSIX/lowlib/syscalls/ttyname.c,v 1.1 2011/12/27 17:13:35 liu1 Exp $ */
static char rcsid[] = "@(#)$Header: /cvsroot/bfree-info/B-Free/Program/btron-pc/kernel/POSIX/lowlib/syscalls/ttyname.c,v 1.1 2011/12/27 17:13:35 liu1 Exp $";

/*
 * $Log: ttyname.c,v $
 * Revision 1.1  2011/12/27 17:13:35  liu1
 * Initial Version.
 *
 * Revision 1.4  1999-03-21 00:58:23  monaka
 * Major fix. Many system calls runs correctly (...perhaps ;-). But signal and process functions are not yet.
 *
 * Revision 1.3  1999/02/19 10:05:08  monaka
 * Addition or fix for parameter structure.
 *
 * Revision 1.2  1999/02/19 08:59:45  monaka
 * added the parameter structure on.
 *
 * Revision 1.1  1997/08/31 13:10:50  night
 * �ǽ����Ͽ
 *
 *
 *
 */


#include "../lowlib.h"




int
psys_ttyname (void *argp)
{
  ER			error;
  struct posix_request	req;
  struct posix_response	res;
  struct psc_ttyname *args = (struct psc_ttyname *)argp;

  req.param.par_ttyname.namelen = args->namelen;
  req.param.par_ttyname.name = args->name;

  error = _make_connection(PSC_TTYNAME, &req, &res);
  if (error != E_OK)
    {
      /* What should I do? */
    }

  else if (res.errno)
    {
      ERRNO = res.errno;
      return (-1);
    }

  return (res.status);
}