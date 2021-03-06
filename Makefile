bin=esmotd
src=src/main.c
target=/usr/bin

CFLAGS+=-std=c99 -Wall

$(bin): $(src)
	$(CC) $(CFLAGS) -o $(bin) $(src)

install: $(bin)
	./install

clean:
	rm -f $(bin)
