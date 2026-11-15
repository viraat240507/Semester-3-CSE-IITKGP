SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
HEADERS = div_2.h div_3.h
CC = gcc
CFLAGS = -Wall
TARGET = exec_name

.PHONY: clean all run gdb

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

gdb: $(TARGET)
	gdb ./$(TARGET)

clean: 
	rm -f $(OBJS) $(TARGET) *.d
