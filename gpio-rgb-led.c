#include <linux/init.h>
#include <linux/module.h>

static int __init
hello_init(void)
{
    printk("Hello, Onion!\n");
            return 0;
}

module_init(hello_init);

static void __exit
hello_exit(void)
{
    printk("Goodbye, Onion!\n");
}

module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Onion");
MODULE_DESCRIPTION("\"Hello, world!\" minimal module");
MODULE_VERSION("printk");
