CC = gcc
CFLAGS = -Wall -g
OBJS = main.o register.o printall.o search.o delete.o
all:main
%o:%c
	$(CC) $(CFLAGS) -c $<
main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)
clean:
	rm -f main $(OBJS)
