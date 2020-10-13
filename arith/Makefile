CC=gcc

arithdemo: arithdemo.o add.o sub.o
	$(CC) -o arithdemo arithdemo.o add.o sub.o

arithdemo.o: arithdemo.c
	$(CC) -c -o arithdemo.o arithdemo.c

add.o: add.c
	$(CC) -c -o add.o add.c


sub.o: sub.c
	$(CC) -c -o sub.o sub.c

clean:
	rm -rf *.o