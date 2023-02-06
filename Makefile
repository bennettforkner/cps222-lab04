CXXFLAGS=-std=c++11 -g -Wall -Wextra

all:	lab4_4 lab4_10

lab4_1: lab4_1.cc
	g++ $(CXXFLAGS) -o $@ $^

lab4_2: lab4_2.cc
	g++ $(CXXFLAGS) -o $@ $^

lab4_3: lab4_3.cc
	g++ $(CXXFLAGS) -o $@ $^

lab4_4:	lab4_4.cc
	g++ -o $@ $^

lab4_5:	lab4_5.cc
	g++ $(CXXFLAGS) -o $@ $^

lab4_6:	lab4_6.cc
	g++ $(CXXFLAGS) -o $@ $^

lab4_7:	lab4_7.cc
	g++ $(CXXFLAGS) -o $@ $^

lab4_8:	lab4_8.cc
	g++ $(CXXFLAGS) -o $@ $^

lab4_9:	lab4_9.cc
	g++ $(CXXFLAGS) -o $@ $^

lab4_10.o:	node.h
lab4_10:	lab4_10.cc
	g++ -o $@ $^

lab4_11:	lab4_11.cc
	g++ $(CXXFLAGS) -o $@ $^
