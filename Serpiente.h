#ifndef Serpiente_H
#define Serpiente_H
#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Serpiente{
	private:
		string nombre;
		int pixels;
		int movimientos;
		int puntuacion;
		vector<string>posiciones;

	public:
		//Contructor
		Serpiente();
		Serpiente(string);
		int getPixels();
		void setPixels(int);
		int getMovimientos();
		void setMovimientos(int);
		int getPuntuacion();
		void setPuntacion(int);
		vetor<string> getPosiciones();
		void setPosicion();

		//Destructor
		~Serpiente();

}; 


#endif
