# lul
Linux Utility Lab Programs

## 1. Loadable kernel module
* The Makefile includes the necessary arguments to the compiler to compile the c code for the module. It creates * an object file named palin.o
* To compile the code, type `make`. This will create several files one of which will be `palin.ko`
* To insert the module, type `insmod palin.ko`. Type `dmesg | tail` to see the output message from the module.
* To remove the module, type `rmmod palin`