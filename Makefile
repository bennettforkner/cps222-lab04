all:	lab4_4 lab4_10

lab4_4:	lab4_4.cc
	g++ -o $@ $^

lab4_10.o:	node.h
lab4_10:	lab4_10.cc
	g++ -o $@ $^
