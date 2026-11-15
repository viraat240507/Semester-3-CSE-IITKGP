SRCS = $(wildcard *.c)
OBJS = $(SRCS.c=.o)
HDRS = add.h sub.h mul.h div.h
AR = ar
CC = gcc
CFLAGS = -Wall

STATIC_LIB := libdir1.a

.PHONY: all clean

all: $(STATIC_LIB)

$(STATIC_LIB): $(OBJS)
	$(AR) rcs $@ $^

%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< $@

clean:
	rm -f $(OBJS) $(STATIC_LIB)
