include ../Makefile.inc

SRC := $(wildcard *.c)

all:	$(SRC)
	$(CC) -o $(shell basename -z $< .c) $< $(CFLAGS) $(INC) $(LIBS)

clean:	$(SRC)
	$(RM) $(shell basename -z $< .c)
