#include"Serpiente.h"

Serpiente::Serpiente(){
	nombre="Juan";
	pixels=0;
	movimientos=0;
	puntuacion=0;
}

Serpiente::Serpiente(string nombre){
	this->nombre=nombre;
	pixels=0;
	movimientos=0;
	puntuacion=0;
}

string Serpiente::getNombre(){
	return nombre;
}

void Serpiente::setNombre(string nombre){
	this->nombre=nombre;
}

int Serpiente::getPixels(){
	return pixels;
}

void Serpiente::setPixels(int pixels){
	this->pixels=pixels;
}

int Serpiente::getMovimientos(){
	return movimientos;
}

void Serpiente::setMovimientos(int movimientos){
	this->movimientos=movimientos;
}

int Serpiente::getPuntuacion(){
	return puntuacion;
}

void Serpiente::setPuntuacion(int puntuacion){
	this->puntuacion=puntuacion;
}

/*vector<string> Serpiente::getPosiciones(){
	return posiciones;
}

void Serpiente::setPosicion(string pos){
	posiciones.push_back(pos);
}*/

Serpiente::~Serpiente(){

}


