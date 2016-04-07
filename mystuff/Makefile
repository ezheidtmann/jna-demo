
libmystuff.so: mystuff.c
	gcc -g -std=c99 -shared -fPIC -Wl,--export-dynamic $^ -o libmystuff.so

.PHONY: install

install:
	cp *.so ..
