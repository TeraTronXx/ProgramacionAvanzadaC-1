#include "stdafx.h"
#include <iostream>
#include "Cuadrado.h"



Cuadrado::Cuadrado(double a[2], double b[2], double c[2], double d[2]):Rectangulo(a,b,c,d) {

	//cout << "Constructor de Cuadrado\n";
	//para el problema de ambiguedad con rectangulo
	//se intenta acceder a los datos en orden para mejorar el rendimiento
	setA(a);
	setB(b);
	setC(c);
	setD(d);

}

double Cuadrado::Area() {

	double lado = a[0] - b[0];
	double resultado = lado * lado;
	return resultado;
}

void Cuadrado::mostrarDatos() {

	printf("CUADRADO \na = %.2f, %.2f \nb = %.2f, %.2f \nc = %.2f, %.2f \nd = %.2f, %.2f \nArea: %.2f \n", a[0], a[1], b[0], b[1], c[0], c[1], d[0], d[1], Area());
	/*
	cout << "CUADRADO" << endl;
	cout << "a = " << a[0] << ", " << a[1] << endl;
	cout << "b = " << b[0] << ", " << b[1] << endl;
	cout << "c = " << c[0] << ", " << c[1] << endl;
	cout << "d = " << d[0] << ", " << d[1] << endl;

	cout << "Area: " << Area() << endl;
	*/
}
