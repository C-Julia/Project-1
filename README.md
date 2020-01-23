# CS2401-Project-1
main: my_int_main.o my_int.o
	g++ -Wall my_int_main.o my_int.o -o main
my_int_main.o: my_int_main.cc
	g++ -Wall -c my_int_main.cc
my_int.o: my_int.cc
	g++ -Wall -c my_int.cc
clean:
	rm -f a.out 
	rm -f my_int_main.o
