// custom_hello.c: A simple character device driver  
#include <linux/init.h>       // module_init, module_exit  
#include <linux/module.h>     // MODULE_*, module_* macros  
#include <linux/kernel.h>     // printk  
#include <linux/fs.h>         // File operations (for character devices)  
 
// Module metadata  
MODULE_LICENSE("GPL");                  // License (GPL required for kernel)  
MODULE_AUTHOR("PranavPatil");             // Author name  
MODULE_DESCRIPTION("Custom Hello World Driver"); // Driver description  
MODULE_VERSION("0.1");                  // Driver version  
 
// Driver initialization: Runs when the driver is loaded  
static int __init custom_hello_init(void) {  
    printk(KERN_INFO "Custom Hello Driver: Loaded successfully!\n");  
    return 0; // 0 = initialization success  
}  
 
// Driver cleanup: Runs when the driver is unloaded  
static void __exit custom_hello_exit(void) {  
    printk(KERN_INFO "Custom Hello Driver: Unloaded successfully!\n");  
}  
 
// Register init/exit functions  
module_init(custom_hello_init);  
module_exit(custom_hello_exit);  
