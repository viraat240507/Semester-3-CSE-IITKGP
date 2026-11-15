CC = gcc
OBJS = main.o add.o multiply.o divide.o
HDRS = operations.h

#Default target
oper: $(OBJS) 
	$(CC) $(OBJS) -o oper

main.o: main.c $(HDRS)
	$(CC) -c $(@:.o=.c)

add.o: add.c
	$(CC) -c $(@:.o=.c)

multiply.o: multiply.c 
	$(CC) -c $(@:.o=.c)

divide.o: divide.c 
	$(CC) -c $(@:.o=.c)

.PHONY: clean
clean: 
	rm -f $(OBJS) oper
