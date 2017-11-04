#include"header.h"
#include"fops.h"
#include"declaration.h"
int majorno;
static int __init initfunc(void)
{
	majorno=MAJORNO;
	majorno=register_chrdev(majorno,DEVNAME,&fops);
	if(majorno==-1)
	{
		printk(KERN_ERR"Register_dev error\n");
		goto out;
	}
	return 0;

//	printk(KERN_INFO"Hello kernel\n");
	out:
	return -1;


}

module_init(initfunc);
