all: libhello

libhello: hello.c
	$(CC) -c -g -O0 $+
	ar -cvq libhello.a *.o

clean:
	-rm *.o libhello.a

