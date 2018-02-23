#include <iostream>
#include "ncurses.h"
#include <string>
#include "Serpiente.h"
#include <cstdlib>
#include <pthread.h>
	
using namespace std;
//funcion que crear el tablero
string** crear(string**);

//funcion para imprimir el tablero
void imprimir(string**);

//funcion del menu
void menu();

//funcion para poner la comida
string** comida(string**);

//inizialar matriz con serpeinte
string** serp(string**);


int main(){
	string nombre;
	int posx,posy;
	cout<<"Ingrese nombre del jugador";
	cin>>nombre;
	Serpiente* serpiente=new Serpiente(nombre);
	string** matriz=NULL;
	matriz=crear(matriz);
	matriz=comida(matriz);
	matriz=serp(matriz);
	initscr();
	printw("Bienvenido al snake presione cualquier tecla para jugar");
	char entrar=getch();
	move(0,90);
	printw("Jugador: ");
	move(0,95);
	printw(serpiente->getNombre().c_str());
	printw("\n");
	imprimir(matriz);
	refresh();
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(matriz[i][j]=="@"){
				posx=j;
				posy=i;
			}
		}	
		
	}
	char mover;
	while(mover=getch()){
		
	}
	
	
	

	endwin();

	return 0;
}

//funcion para la comida
string** comida(string** matriz){
	int ran=0;
	int ran2=0;
	ran=rand()% 8+1;
	ran2=rand()%8+1;
	matriz[ran][ran2]="*";
	return matriz;
}

//funcion para crear la matriz
string** crear(string** matriz){
	matriz=new string*[10];
	for(int i=0;i<10;i++){
		string* cadena = new string[10];
		for(int j=0;j<10;j++){
			cadena[j]=" ";
		}
		matriz[i]=cadena;

	}

	return matriz;
}

//funcion para imprimir el tablero
void imprimir(string** matriz){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			printw("[");
			printw("%s",matriz[i][j].c_str());
			printw("]");
			printw(" ");
		}
		printw("\n");
	}
}

string** serp(string **matriz){
	matriz[2][2]="s";
	matriz[2][3]="s";
	matriz[2][4]="s";
	matriz[2][5]="s";
	matriz[2][6]="@";
	return matriz;
}


