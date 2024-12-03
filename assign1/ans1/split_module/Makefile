 
obj-m = split_module.o
split_module-objs :=init.o exit.o


split_module.ko: split_module.c	z
	make -C /lib/modules/$$(uname -r)/build M=$$(pwd) modules

clean:
	make -C /lib/modules/$$(uname -r)/build M=$$(pwd) clean

.PHONY: clean
