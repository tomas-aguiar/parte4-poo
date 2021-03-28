all: matrix main clean

matrix: matrix.h matrix.cpp
	g++ -Wall -Werror -pedantic -c matrix.cpp

main: main.cpp matrix.h matrix.cpp
	g++ -Wall -Werror -pedantic matrix.o main.cpp -o main

clean: 
	rm *.o
