
libmystuff.so: mystuff.c
	gcc -g -shared -fPIC -Wl,--export-dynamic $^ -o libmystuff.so

.PHONY: install

install:
	cp *.so ..
