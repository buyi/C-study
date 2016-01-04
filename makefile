#makefile
IntCell: IntCell.o main.o
	gcc -o IntCell IntCell.o main.o
# gcc -c IntCell.cpp
# gcc -o IntCell main.cpp IntCell.o 