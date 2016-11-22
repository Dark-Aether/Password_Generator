CC=gcc
BFLAGS=-coverage -O0
CFLAGS=-ansi -pedantic -Wall -Wextra -o
FILES= src/main.c
EXEC=build/GenPasswd

all:
	$(CC) $(FILES) $(CFLAGS) $(EXEC)

test:
	$(CC) $(BFLAGS) $(FILES) $(CFLAGS) $(EXEC)

clean:
	rm -f $(EXEC)
