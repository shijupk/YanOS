
all: 
	$(MAKE) -C kernel clean all install
run: all
	$(MAKE) -C kernel run

iso: all
	$(MAKE) -C kernel iso
.PHONY: all 

