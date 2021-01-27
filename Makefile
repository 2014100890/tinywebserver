CFLAGS= -Wall -g -I./
LIBS=-lpthread


tiny: tiny.o csapp.o # 필요한 것 
	cc -o tiny tiny.o csapp.o $(LIBS)
	gcc -o ./cgi-bin/adder ./cgi-bin/adder.c $(LIBS)
	gcc -o ./cgi-bin/head-adder ./cgi-bin/head-adder.c $(LIBS)

clean:
	rm *.o tiny
	rm ./cgi-bin/adder
	rm ./cgi-bin/head-adder

re: clean tiny
