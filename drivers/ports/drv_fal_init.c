/*
 * drv_fal_init.c
 *
 * Change Logs:
 * Date           Author        Notes
 * 2020-06-02       qiyongzhong   add fal init
 */

#include <rtthread.h>

#ifdef PKG_USING_FAL

#include <fal.h>
extern int fal_init(void);
INIT_COMPONENT_EXPORT(fal_init);

#endif


