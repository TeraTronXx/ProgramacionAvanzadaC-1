#include "stdafx.h"
#include <iostream>
#include "Circulo.h"
#define _USE_MATH_DEFINES
#include <math.h>


Circulo::Circulo(double centro[2], double radio) {

	//cout << "Constructor de Circulo\n";
	//se intenta acceder a los datos en orden para mejorar el rendimiento
	setCentro(centro);
	setRadio(radio);
	
}

double Circulo::Area() {

	double resultado = M_PI * (radio*radio);


	return resultado;
}


void Circulo::mostrarDatos() {
	printf("CIRCULO \ncentro = %.2f, %.2f \nradio = %.2f \nArea: %.2f \n", centro[0], centro[1], radio, Area());
	/*
	cout << "CIRCULO" << endl;
	cout << "centro = " << centro[0] << ", " << centro[1] << endl;
	cout << "radio = " << radio << endl;

	cout << "Area: " << Area() << endl;
	*/
}