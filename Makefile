CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = src/main.c src/contacts.c
OUT = contact-manager

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
