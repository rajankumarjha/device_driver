#include"header.h"
#include"declaration.h"


static void __exit clean(void)
{
	unregister_chrdev(majorno,DEVNAME);

	//printk(KERN_INFO "END");
}
module_exit(clean);
