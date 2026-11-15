SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
HDRS = lcm.h gcd.h
CC = gcc
AR = ar
CFLAGS = -Wall

STATIC_LIB = libdir2.a

.PHONY: all clean

all: $(STATIC_LIB)

$(STATIC_LIB): $(OBJS)
	$(AR) rcs $@ $^

%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(STATIC_LIB)
