CC=gcc
BFLAGS=-coverage -O0
CFLAGS=-ansi -pedantic -Wall -Wextra -o
FILES= src/main.c
EXEC=build/GenPasswd

all:
	$(CC) $(BFLAGS) $(FILES) $(CFLAGS) $(EXEC)

clean:
	rm -f $(EXEC)
