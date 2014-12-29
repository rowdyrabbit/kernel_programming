/*  
 * My first kernel module 
 */
#include <linux/module.h>       /* Needed by all modules */
#include <linux/kernel.h>       /* Needed for KERN_DEBUG */

int init_module(void)
{
        printk(KERN_DEBUG "Hello World!\n");
        /* 
         * A non 0 return means module load failed.
         */
        return 0;
}

void cleanup_module(void)
{
        printk(KERN_DEBUG "Goodbye World!\n");
}

MODULE_LICENSE("GPL");