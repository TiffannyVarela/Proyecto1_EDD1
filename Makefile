Main : Main.o Object.o TDALista.o TDAPila.o TDACola.o Simbolo.o Alumno.o ArrayList.o Node.o LinkedList.o ArrayStack.o LinkedStack.o ArrayQueue.o LinkedQueue.o
	g++ Main.o Object.o TDALista.o TDAPila.o TDACola.o Simbolo.o Alumno.o ArrayList.o Node.o LinkedList.o ArrayStack.o LinkedStack.o ArrayQueue.o LinkedQueue.o -o main.out
Main.o: Main.cpp Object.cpp TDALista.cpp TDAPila.cpp TDACola.cpp Simbolo.cpp Alumno.cpp ArrayList.cpp Node.cpp LinkedList.cpp ArrayStack.cpp LinkedStack.cpp ArrayQueue.cpp LinkedQueue.cpp
	g++ -c Main.cpp

