CC := gcc

all: test endian

test: test.c
	cc -o test.o test.c

endian: endian.c
	cc -o endian.o endian.c

clean:
	$(RM) *.o