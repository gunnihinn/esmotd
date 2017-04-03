CFLAGS+=-std=c99

all:
	$(CC) $(CFLAGS) -o esmotd src/main.c
