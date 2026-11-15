CC=gcc
CFLAGS=-Wall

#default target 
all: hello

#rule to compile the executable
hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello

#target to clean up generated files
clean:
	rm -f hello
