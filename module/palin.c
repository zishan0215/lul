#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/moduleparam.h>

MODULE_AUTHOR("Zishan Ahmad");

char *istring = "Hello";
module_param(istring, charp, 0000);
MODULE_PARM_DESC(istring, "An input character string");

int init_module() {
	int i=0,j=0, flag=1;
	while(istring[i] != '\0') {
		i++;
	}
	i--;
	while(i>j) {
		if(istring[i--] != istring[j++]) {
			flag = 0;
		}
	}
	if(flag) {
		printk(KERN_INFO "\n%s is a palindrome\n", istring);
	} else {
		printk(KERN_INFO "\n%s is not a palindrome\n", istring);
	}
	return 0;
}

void cleanup_module(void) {
}
