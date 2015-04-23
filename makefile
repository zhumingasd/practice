objects = main.o Cat.o Animal.o
main : $(objects)
	cc $(objects) -o main
main.o : main.cpp Animal.h Cat.h
	cc main.cpp -c -o main.o
Cat.o : Cat.cpp Cat.h Animal.h
	cc Cat.cpp -c -o Cat.o
Animal.o : Animal.cpp Animal.h
	cc Animal.cpp -c -o Animal.o
clean : 

