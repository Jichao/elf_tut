drive: drive.c keke.c
	gcc -std=c99  -g -fPIC -c keke.c
	gcc -shared -o libkeke.so keke.o
	gcc -std=c99  -g -o drive drive.c -L. -lkeke
clean:
	-@rm libkeke.so 2>/dev/null || true
	-@rm keke.o 2>/dev/null || true
	-@rm drive 2>/dev/null || true
PHONLY: clean
