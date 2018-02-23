#include <iostream>
#include "ncurses.h"
#include <string>
#include "Serpiente.h"
using namespace std;
//funcion que crear el tablero
string** crear(string**);

//funcion para imprimir el tablero
void imprimir(string**);

int main(){
	string nombre;
	cout<<"Ingrese el nombre del jugador: ";
	cin>>nombre;
	Serpiente* serpiente=new Serpiente(nombre);
	initscr();
	string** tablero=NULL;	
	printw("Bienvenido al snake presione enter para jugar");
	mvprintw(0,50,serpiente->getNombre());
	int ch;
	if((ch==getch())==10){
		tablero=crear(tablero);
		imprimir(tablero);
		refresh();
	}

	refresh();
	start_color();
	endwin();

	return 0;
}


//funcion para crear la matriz
string** crear(string** matriz){
	matriz=new string*[10];
	for(int i=0;i<10;i++){
		matriz[i]=new string[10];
	}
	return matriz;
}

//funcion para imprimir el tablero
void imprimir(string** matriz){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;i++){
			printw("hola");
		}
	}
}
