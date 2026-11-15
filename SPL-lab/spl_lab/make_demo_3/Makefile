CC = gcc
CFLAGS = -Wall
TARGET = app

SUBDIRS = dir1 dir2

LIBS = dir1/libdir1.a dir2/libdir2.a

.PHONY: all clean $(SUBDIRS)

all: $(TARGET)

$(SUBDIRS):
	$(MAKE) -C $@

$(TARGET): $(SUBDIRS)
	$(CC) $(CFLAGS) main.c $(LIBS) -o $@

clean: 
	for dir in $(SUBDIRS); do $(MAKE) -C $$dir clean; done
	rm -f $(TARGET)
