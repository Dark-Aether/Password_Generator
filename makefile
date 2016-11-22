CC=gcc
CFLAGS=-ansi -pedantic -Wall -Wextra -o
FILES= src/main.c
EXEC=GenPasswd

all:
	$(CC) $(FILES) $(CFLAGS) $(EXEC)

clean:
	rm -f $(EXEC)
