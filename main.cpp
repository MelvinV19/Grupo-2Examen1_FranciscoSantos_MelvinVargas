#include <iostream>
#include "ncurses.h"
#include <string>
using namespace std;
//funcion que crear el tablero
string** crear(string**);

//funcion para imprimir el tablero
void imprimir(string**);

int main(){
	string nombre;
	cout<<"Ingrese el nombre del jugador: ";
	cin>>nombre;
	initscr();
	string** tablero=NULL;
	printw("Bienvenido al snake presione enter para jugar");
	int ch;
	if((ch==getch())==10){
		tablero=crear(tablero);
		imprimir(tablero);
		refresh();
		getch();


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
