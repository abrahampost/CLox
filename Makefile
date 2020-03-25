CC=gcc
CFLAGS=-Wall -Wextra -pedantic -std=c99
DEPS=*.h
OBJS=main.c memory.c chunk.c debug.c value.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJS)
	$(CC) -o main $(OBJS)

clean:
	rm -rf *.o *.exe