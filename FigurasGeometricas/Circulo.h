#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Figura.h"

//En c++ se llama clase de tipo abstracta al tener un metodo = 0
using namespace std;
class Circulo : public Figura {
	//el cuadrado se compone de 4 puntos con 2 coordenadas cada uno.
	//los puntos, se guardan de forma consecutiva. De forma que nunca se cortaran las aristas


public:
	//constructor por defecto
	//Rectangulo();

	//constructor por parametros
	Circulo(double centro[2], double radio);

	//constructor por copia
	//Rectangulo(Rectangulo &R);

	//desctructor
	//~Rectangulo();

	double Area();
	void mostrarDatos();
};