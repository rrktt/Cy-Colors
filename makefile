SOURCES=  $(wildcard *.c)
OBJECTS= $(SOURCES: .c=.o)

program: main.o $(OBJECTS)
	gcc -p $@ $^

main.o : main.c
	gcc -c $<

%.o: %.c
	gcc -c $<