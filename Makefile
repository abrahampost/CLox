CC=gcc
CFLAGS=-Wall -Wextra -pedantic -std=c99
DEPS=*.h
OBJS=main.o memory.o chunk.o debug.o value.o vm.o compiler.o scanner.o object.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJS)
	$(CC) -o main $(OBJS)

clean:
	rm -rf *.o