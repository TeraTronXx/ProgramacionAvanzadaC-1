#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>

#include "Rectangulo.h"
//En c++ se llama clase de tipo abstracta al tener un metodo = 0
using namespace std;
class Cuadrado : public Rectangulo{
	//el cuadrado se compone de 4 puntos con 2 coordenadas cada uno.
	//los puntos, se guardan de forma consecutiva. De forma que nunca se cortaran las aristas


public:
	//constructor por defecto
	//Rectangulo();

	//constructor por parametros
	Cuadrado(double a[2], double b[2], double c[2], double d[2]);

	double Area();
	void mostrarDatos();
};