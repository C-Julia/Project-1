# Julia Cygan
# February 1st, 2020
# CS 2401
# Professor John Dolan

# Variables
CC = g++
CFLAGS = -g -Wall -std=c++11

# Linking all the files and run the tests. Use your own header and
# object files.

a.out: appointment.o appointment.h appointment_main.o
	$(CC) $(CFLAGS) appointment.o appointment_main.o -o a.out

appointment.o: appointment.cc appointment.h
	$(CC) -c $(CFLAGS) appointment.cc -o appointment.o

appointment_main.o: appointment_main.cc appointment.h
	$(CC) -c $(CFLAGS) appointment_main.cc -o appointment_main.o

clean:
	rm -rf /*.o run_tests a.out a.out