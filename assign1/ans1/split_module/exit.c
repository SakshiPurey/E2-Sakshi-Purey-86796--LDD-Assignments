#include<linux/init.h>
#include<linux/module.h>

static void vdg_exit(void)
{
    printk(KERN_INFO "exiting from the module with two files.....\n");
}

module_exit(vdg_exit);
