#include <iostream>
#include <string>
#include <ctype.h>

#include "Alumno.h"
#include "Simbolo.h"
#include "TDAPila.h"
#include "ArrayStack.h"
#include "LinkedStack.h"
#include "TDACola.h"
#include "ArrayQueue.h"
#include "LinkedQueue.h"
#include "TDALista.h"
#include "ArrayList.h"
#include "Node.h"
#include "LinkedList.h"
#include "Object.h"

using namespace std;

int valNum(string);
string valLetra(string);
string valApha(string);

int menu();
int menuListas();
int menuSubListas();
int menuPilas();
int menuSubPilas();
int menuColas();
int menuSubColas();

Alumno* NAlumno();
Alumno* NAlumnoL();
ArrayList* arraylist = new ArrayList;
LinkedList* linkedList = new LinkedList;
Object* nuevoAlum = new Alumno;
Alumno* alumno;
Node* node;
int pos;

ArrayStack* arraystack = new ArrayStack;
Object* nuevoSimbolo = new Simbolo;
Simbolo* simbolo;
LinkedStack* linkedstack = new LinkedStack;

ArrayQueue* arrayqueue = new ArrayQueue;
Object* nuevoAlumqueue = new Alumno;
Alumno* alumnoqueue;
Node* nodequeue;
LinkedQueue* linkedqueue = new LinkedQueue;

int main(int argc, char const *argv[])
{
	int opc=0;
	do{//inicio do while principal
		switch(opc=menu()){//inicio switch principal
			case 1://inicio case 1 principal
			{
				do{//inicio do while listas
					switch(opc=menuListas()){//inicio switch listas
						case 1://inicio case 1 listas
						{
							do{//inicio do while ArrayList
								switch (opc=menuSubListas()){//inicio switch ArrayList
									case 1://inicio case 1 ArrayList
									{
										int resp=0;
										do{
											alumno = NAlumno();
											cout<<"Desea ingresar otro objeto? 1.Si 0.No: ";
											cin>>resp;
										}while(resp!=0);
									}
									break;//fin case 1 ArrayList

									case 2://inicio case 2 ArrayList
									{
										arraylist->imprime();
									}
									break;//fin case 2 ArrayList

									case 3://inicio case 3 ArrayList
									{
										string cuenta;
										cout<<"Cuenta a buscar: ";
										cin>>cuenta;
										alumno->setCuenta(cuenta);
										if (arraylist->buscar(alumno)!=NULL)
										{
											cout<<arraylist->buscar(alumno)->toString();
										}
										else{
											cout<<"Elemento no Encontrado"<<endl;
										}
									}
									break;//fin case 3 ArrayList

									case 4://inicio case 4 ArrayList
									{
										cout<<"Posicion a eliminar: ";
										cin>>pos;
										if (arraylist->borrar(pos)!=NULL)
										{
											cout<<"Eliminacion Exitosa"<<endl;
											cout<<arraylist->borrar(pos)->toString();
										}
										else{
											cout<<"Error al borrar elemento"<<endl;
										}
									}
									break;//fin case 4 ArrayList

									case 5://inicio case 5 ArrayList
									{
										if (arraylist->vacia())
										{
											cout<<"Lista Vacia"<<endl;
										}
										else{
											cout<<"Lista no Vacia"<<endl;
										}
									}
									break;//fin case 5 ArrayList

									case 6://inicio case 6 ArrayList
									{
										cout<<"Posicion a obtener: ";
										cin>>pos;
										if (arraylist->obtener(pos)!=NULL)
										{
											cout<<arraylist->obtener(pos)->toString();
										}
										else{
											cout<<"Posicion no Valida"<<endl;
										}
									}
									break;//fin case 6 ArrayList

									case 7://inicio case 7 ArrayList
									{
										cout<<"Posicion a obtener el siguiente: ";
										cin>>pos;
										if (arraylist->siguiente(pos)!=NULL)
										{
											cout<<arraylist->siguiente(pos)->toString();
										}
										else{
											cout<<"Posicion Vacia"<<endl;
										}
									}
									break;//fin case 7 ArrayList

									case 8://inicio case 8 ArrayList
									{
										cout<<"Posicion a obtener el anterior: ";
										cin>>pos;
										if (arraylist->anterior(pos)!=NULL)
										{
											cout<<arraylist->anterior(pos)->toString();
										}
										else{
											cout<<"Posicion Vacia"<<endl;
										}
									}
									break;//fin case 8 ArrayList

									case 9://inicio case 9 ArrayList
									{
										arraylist->anula();
									}
									break;//fin case 9 ArrayList

								}//fin switch ArrayList
							}while (opc!=10);//fin do while ArrayList
						}
						break;//fin case 1 listas

						case 2://inicio case 2 listas
						{
							do{//inicio do while Linked List
								switch (opc=menuSubListas()){//inicio switch Linked List
									case 1://inicio case 1 Linked List
									{
										int resp=0;
										do{
											alumno = NAlumnoL();
											cout<<"Desea ingresar otro objeto? 1.Si 0.No: ";
											cin>>resp;
										}while(resp!=0);
									}
									break;//fin case 1 Linked List

									case 2://inicio case 2 Linked List
									{
										linkedList->imprime();
									}
									break;//fin case 2 Linked List

									case 3://inicio case 3 Linked List
									{
										string cuenta;
										cout<<"Cuenta a buscar: ";
										cin>>cuenta;
										alumno->setCuenta(cuenta);
										if (linkedList->buscar(alumno)!=NULL)
										{
											cout<<linkedList->buscar(alumno)->toString();
										}
										else{
											cout<<"Elemento no Encontrado"<<endl;
										}
									}
									break;//fin case 3 Linked List

									case 4://inicio case 4 Linked List
									{
										cout<<"Posicion a eliminar: ";
										cin>>pos;
										if (linkedList->borrar(pos)!=NULL)
										{
											cout<<"Eliminacion Exitosa"<<endl;
											cout<<linkedList->borrar(pos)->toString();
										}
										else{
											cout<<"Error al borrar elemento"<<endl;
										}
									}
									break;//fin case 4 Linked List

									case 5://inicio case 5 Linked List
									{
										if (linkedList->vacia())
										{
											cout<<"Lista Vacia"<<endl;
										}
										else{
											cout<<"Lista no Vacia"<<endl;
										}
									}
									break;//fin case 5 Linked List

									case 6://inicio case 6 Linked List
									{
										cout<<"Posicion a obtener: ";
										cin>>pos;
										if (linkedList->obtener(pos)!=NULL)
										{
											cout<<linkedList->obtener(pos)->toString();
										}
										else{
											cout<<"Posicion no Valida"<<endl;
										}
									}
									break;//fin case 6 Linked List

									case 7://inicio case 7 Linked List
									{
										cout<<"Posicion a obtener el siguiente: ";
										cin>>pos;
										if (linkedList->siguiente(pos)!=NULL)
										{
											cout<<linkedList->siguiente(pos)->toString();
										}
										else{
											cout<<"Posicion Vacia"<<endl;
										}
									}
									break;//fin case 7 Linked List

									case 8://inicio case 8 Linked List
									{
										cout<<"Posicion a obtener el anterior: ";
										cin>>pos;
										if (linkedList->anterior(pos)!=NULL)
										{
											cout<<linkedList->anterior(pos)->toString();
										}
										else{
											cout<<"Posicion Vacia"<<endl;
										}
									}
									break;//fin case 8 Linked List

									case 9://inicio case 9 Linked List
									{
										linkedList->anula();
									}
									break;//fin case 9 Linked List

								}//fin switch Linked List
							}while (opc!=10);//fin do while Linked List
						}
						break;//fin case 2 listas

					}//fin switch listas
				}while(opc!=3);//fin do while listas
			}
			break;//fin case 1 principal

			case 2://inicio case 2 principal
			{
				do{//inicio do while Pilas
					switch(opc=menuPilas()){//inicio switch Pilas
						case 1://inicio case 1 Pilas
						{
							do{//inicio do while ArrayStack
								switch (opc=menuSubPilas()){//inicio switch ArrayStack
									case 1://inicio case 1 ArrayStack
									{
										char s;
										cout<<"Ingrese simbolo: ";
										cin>>s;
										simbolo=dynamic_cast<Simbolo*>(nuevoSimbolo);
										simbolo = new Simbolo(s);
										arraystack->push(simbolo);
										
									}
									break;//fin case 1 ArrayStack

									case 2://inicio case 2 ArrayStack
									{
										if (arraystack->pop()!=NULL)
										{
											cout<<arraystack->pop()->toString();
										}
									}
									break;//fin case 2 ArrayStack

									case 3://inicio case 3 ArrayStack
									{
										if (arraystack->top()!=NULL)
										{
											cout<<arraystack->top()->toString();
										}
									}
									break;//fin case 3 ArrayStack

									case 4://inicio case 4 ArrayStack
									{
										if (arraystack->isEmpty())
										{
											cout<<"Esta Vacia"<<endl;
										}
										else{
											cout<<"No Esta Vacia"<<endl;
										}
									}
									break;//fin case 4 ArrayStack

									case 5://inicio case 5 ArrayStack
									{
										arraystack->print();
									}
									break;//fin case 5 ArrayStack

								}//fin switch ArrayStack
							}while (opc!=6);//fin do while ArrayStack
						}
						break;//fin case 1 Pilas

						case 2://inicio case 2 Pilas
						{
							do{//inicio do while LinkedStack
								switch (opc=menuSubPilas()){//inicio switch LinkedStack
									case 1://inicio case 1 LinkedStack
									{
										char s;
										cout<<"Ingrese simbolo: ";
										cin>>s;
										simbolo=dynamic_cast<Simbolo*>(nuevoSimbolo);
										simbolo = new Simbolo(s);
										node = new Node();
										node->setData(simbolo);
										linkedstack->push(simbolo);
									}
									break;//fin case 1 LinkedStack

									case 2://inicio case 2 LinkedStack
									{
										if (linkedstack->pop()!=NULL)
										{
											cout<<linkedstack->pop()->toString();
										}
									}
									break;//fin case 2 LinkedStack

									case 3://inicio case 3 LinkedStack
									{
										if (linkedstack->top()!=NULL)
										{
											cout<<linkedstack->top()->toString();
										}
									}
									break;//fin case 3 LinkedStack

									case 4://inicio case 4 LinkedStack
									{
										if (linkedstack->isEmpty())
										{
											cout<<"Esta Vacia"<<endl;
										}
										else{
											cout<<"No Esta Vacia"<<endl;
										}
									}
									break;//fin case 4 LinkedStack

									case 5://inicio case 5 LinkedStack
									{
										linkedstack->print();
									}
									break;//fin case 5 LinkedStack

								}//fin switch LinkedStack
							}while (opc!=6);//fin do while LinkedStack
						}
						break;//fin case 2 Pilas

					}//fin switch Pilas
				}while(opc!=3);//fin do while Pilas
			}
			break;//fin case 2 principal

			case 3://inicio case 3 principal
			{
				do{//inicio do while Colas
					switch(opc=menuColas()){//inicio switch Colas
						case 1://inicio case 1 Colas
						{
							do{//inicio do while ArrayQueue
								switch (opc=menuSubColas()){//inicio switch ArrayQueue
									case 1://inicio case 1 ArrayQueue
									{
										string nombre, cuenta;
										cout<<"Ingrese nombre: ";
										cin>>nombre;
										cout<<"Ingrese cuenta: ";
										cin>>cuenta;
										alumnoqueue= dynamic_cast<Alumno*>(nuevoAlumqueue);
										alumnoqueue = new Alumno(nombre, cuenta);
										arrayqueue->encolar(alumnoqueue);
									}
									break;//fin case 1 ArrayQueue

									case 2://inicio case 2 ArrayQueue
									{
										if (arrayqueue->desencolar()!=NULL)
										{
											cout<<arrayqueue->desencolar()->toString();
										}
										else{
											cout<<"No hay elementos en la cola"<<endl;
										}
									}
									break;//fin case 2 ArrayQueue

									case 3://inicio case 3 ArrayQueue
									{
										cout<<arrayqueue->verTope()->toString();
									}
									break;//fin case 3 ArrayQueue

									case 4://inicio case 4 ArrayQueue
									{
										if (arrayqueue->vacia())
										{
											cout<<"Esta Vacia"<<endl;
										}
										else{
											cout<<"No Esta Vacia"<<endl;
										}
									}
									break;//fin case 4 ArrayQueue

									case 5://inicio case 5 ArrayQueue
									{
										arrayqueue->imprime();
									}
									break;//fin case 5 ArrayQueue

								}//fin switch ArrayQueue
							}while (opc!=6);//fin do while ArrayQueue
						}
						break;//fin case 1 Colas

						case 2://inicio case 2 Colas
						{
							do{//inicio do while LinkedQueue
								switch (opc=menuSubColas()){//inicio switch LinkedQueue
									case 1://inicio case 1 LinkedQueue
									{
										string nombre, cuenta;
										cout<<"Ingrese nombre: ";
										cin>>nombre;
										cout<<"Ingrese cuenta: ";
										cin>>cuenta;
										alumnoqueue= dynamic_cast<Alumno*>(nuevoAlumqueue);
										alumnoqueue = new Alumno(nombre, cuenta);
										//node = dynamic_cast<Node*>(alumno);
										nodequeue = new Node();
										nodequeue->setData(alumnoqueue);
										linkedqueue->encolar(nodequeue);
									}
									break;//fin case 1 LinkedQueue

									case 2://inicio case 2 LinkedQueue
									{
										if (linkedqueue->desencolar()!=NULL)
										{
											cout<<linkedqueue->desencolar()->toString();
										}
										else{
											cout<<"No hay elementos en la cola"<<endl;
										}
									}
									break;//fin case 2 LinkedQueue

									case 3://inicio case 3 LinkedQueue
									{
										cout<<linkedqueue->verTope()->toString();
									}
									break;//fin case 3 LinkedQueue

									case 4://inicio case 4 LinkedQueue
									{
										if (linkedqueue->vacia())
										{
											cout<<"Esta Vacia"<<endl;
										}
										else{
											cout<<"No Esta Vacia"<<endl;
										}
									}
									break;//fin case 4 LinkedQueue

									case 5://inicio case 5 LinkedQueue
									{
										linkedqueue->imprime();
									}
									break;//fin case 5 LinkedQueue

								}//fin switch LinkedQueue
							}while (opc!=6);//fin do while LinkedQueue
						}
						break;//fin case 2 Colas

					}//fin switch Colas
				}while(opc!=3);//fin do while Colas
			}
			break;//fin case 3 principal

		}//fin switch principal
	}while(opc!=4);//fin do while principal
	delete arraylist;
	delete nuevoAlum;
	delete alumno;
	delete node;
	delete linkedList;
	delete arraystack;
	delete nuevoSimbolo;
	delete simbolo;
	delete arrayqueue;
	cout<<"Saliendo"<<endl;
	return 0;
}

int menu(){//inicio metodo menu
    while(true){
        cout<<"Menu Principal"<<endl
        <<"1.- Trabajar con Listas"<<endl
        <<"2.- Trabajar con Pilas"<<endl
		<<"3.- Trabajar con Colas"<<endl
		<<"4.- Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 4){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 4"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menu

int menuListas(){//inicio metodo menuListas
    while(true){
        cout<<"Menu Tipo de Lista"<<endl
        <<"1.- Trabajar con ArrayList"<<endl
        <<"2.- Trabajar con Linked List"<<endl
		<<"3.- Regresar al Menú Principal"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 3){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 3"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menuListas

int menuSubListas(){//inicio metodo menuSubListas
    while(true){
        cout<<"Operaciones de Listas"<<endl
        <<"1.- Insertar Elemento"<<endl
        <<"2.- Imprimir Elemento"<<endl
        <<"3.- Buscar Elemento"<<endl
        <<"4.- Borrar Elemento"<<endl
        <<"5.- Ver si está vacía"<<endl
        <<"6.- Obtener Elemento por Posición"<<endl
        <<"7.- Obtener Siguiente"<<endl
        <<"8.- Obtener Anterior "<<endl
        <<"9.- Borrar todos los Elementos (Anula)"<<endl
		<<"10.- Regresar al Menú Principal"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 10){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 10"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menuSubListas

int menuPilas(){//inicio metodo menuPilas
    while(true){
        cout<<"Menu Tipo de Pila"<<endl
        <<"1.- Trabajar con ArrayStack"<<endl
        <<"2.- Trabajar con Linked Stack"<<endl
		<<"3.- Regresar al Menú Principal"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 3){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 3"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menuPilas

int menuSubPilas(){//inicio metodo menuSubPilas
    while(true){
        cout<<"Operaciones de Pilas"<<endl
        <<"1.- “Empujar” (push)"<<endl
        <<"2.- “Sacar” (pop)"<<endl
        <<"3.- Ver Tope (top)"<<endl
        <<"4.- Verificar si está vacía"<<endl
        <<"5.- Imprimir elementos"<<endl
        <<"6.- Regresar al Menú Principal"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 6){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 6"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menuSubPilas

int menuColas(){//inicio metodo menuColas
    while(true){
        cout<<"Menu Tipo de Cola"<<endl
        <<"1.- Trabajar con ArrayQueue"<<endl
        <<"2.- Trabajar con LinkedQueue"<<endl
		<<"3.- Regresar al Menú Principal"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 3){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 3"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menuColas

int menuSubColas(){//inicio metodo menuSubColas
    while(true){
        cout<<"Operaciones de Colas"<<endl
        <<"1.- “Encolar” (queue)"<<endl
        <<"2.- “Desencolar” (dequeue)"<<endl
        <<"3.- Ver Tope (peek)"<<endl
        <<"4.- Verificar si está vacía"<<endl
        <<"5.- Imprimir elementos"<<endl
        <<"6.- Regresar al Menú Principal"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 6){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 6"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menuSubColas


Alumno* NAlumno(){
	string nombre, cuenta;
	int pos;
	cout<<"Ingrese nombre: ";
	cin>>nombre;
	cout<<"Ingrese cuenta: ";
	cin>>cuenta;
	cout<<"Ingrese posicion: ";
	cin>>pos;
	alumno= dynamic_cast<Alumno*>(nuevoAlum);
	alumno = new Alumno(nombre, cuenta);
	if (arraylist->inserta(pos, alumno))
	{
		cout<<"Operacion realizada con exito"<<endl;
	}
	else{
		cout<<"Error"<<endl;
	}
	return alumno;
}

Alumno* NAlumnoL(){
	string nombre, cuenta;
	int pos;
	cout<<"Ingrese nombre: ";
	cin>>nombre;
	cout<<"Ingrese cuenta: ";
	cin>>cuenta;
	cout<<"Ingrese posicion: ";
	cin>>pos;
	alumno= dynamic_cast<Alumno*>(nuevoAlum);
	alumno = new Alumno(nombre, cuenta);
	//node = dynamic_cast<Node*>(alumno);
	node = new Node();
	node->setData(alumno);
	if (linkedList->inserta(pos, node))
	{
		cout<<"Operacion realizada con exito"<<endl;
	}
	else{
		cout<<"Error"<<endl;
	}
	return alumno;
}

int valNum(string x){
	int retval=0;
	while(!isdigit(x)){
		cout<<"Ingrese un valor numerico: ";
		cin>>x;
	}
	retval=atoi(x.c_str());
	return retval;
}

string valLetra(string x){
	while(!isalpha(x)){
		cout<<"Ingrese una cadena: ";
		cin>>x;
	}
	return x;
}

string valApha(string x){
	while(!isalnum(x)){
		cout<<"Ingrese un valor alfanumerico: ";
		cin>>x;
	}
	return x;
}
