#Julia Cygan
#Jan 26th, 2020
#CS 2401
#JC362818@ohio.edu

a.out: MyTime.h MyTime.o runtime.h runtime.o main.o runjournal.h runjournal.o
	g++ -Wall MyTime.o runtime.o runjournal.o main.o

MyTime.o: MyTime.cc MyTime.h
	g++ -Wall -c MyTime.cc

runtime.o: runtime.cc runtime.h
	g++ -Wall -c runtime.cc

runjournal.o: runjournal.cc runjournal.h
	g++ -Wall -c runjournal.cc

main.o:	main.cc
	g++ -Wall -c main.cc

