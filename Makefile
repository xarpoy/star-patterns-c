CC = gcc
CFLAGS = -Wall -Iinclude
SRC = src/main.c src/patterns.c
OUT = bin/star_pattern

all:
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

clean:
	rm -f $(OUT)
