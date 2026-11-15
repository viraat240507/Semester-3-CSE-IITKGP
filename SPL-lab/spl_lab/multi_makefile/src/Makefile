CC = gcc
CFLAGS = -Wall -I../include

SRCS = main.c add.c multiply.c
OBJS = $(SRCS:.c=.o)
TARGET = ../build/app
HEADERS = $(wildcard ../include/*.h)

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p ../build
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o
