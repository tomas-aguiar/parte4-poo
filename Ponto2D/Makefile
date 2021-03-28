all: ponto2d main clean

ponto2d: ponto2d.cpp ponto2d.h
	g++ -Wall -Werror -pedantic -c ponto2d.cpp

main: main.cpp
	g++ -Wall -Werror -pedantic ponto2d.o main.cpp -o main

clean: 
	rm *.o
