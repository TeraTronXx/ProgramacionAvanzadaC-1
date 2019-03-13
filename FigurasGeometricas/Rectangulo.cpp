#include "stdafx.h"
#include <iostream>
#include "Rectangulo.h"



Rectangulo::Rectangulo(double a[2], double b[2], double c[2], double d[2]) {

	//cout << "Constructor de Rectangulo\n";
	//se intenta acceder a los datos en orden para mejorar el rendimiento
	setA(a);
	setB(b);
	setC(c);
	setD(d);

}

double Rectangulo::Area() {

	double base = a[0] - b[0];
	double altura = b[1] - c[1];

	double resultado = base * altura;
		if (resultado < 0) {
			resultado = resultado * (-1);
		}

		return resultado;
	}

void Rectangulo::mostrarDatos() {
	printf("RECTANGULO \na = %.2f, %.2f \nb = %.2f, %.2f \nc = %.2f, %.2f \nd = %.2f, %.2f \nArea: %.2f \n", a[0], a[1], b[0], b[1], c[0], c[1], d[0], d[1], Area());
	/*
	cout << "RECTANGULO" << endl;
	cout << "a = " << a[0] << ", " << a[1] << endl;
	cout << "b = " << b[0] << ", " << b[1] << endl;
	cout << "c = " << c[0] << ", " << c[1] << endl;
	cout << "d = " << d[0] << ", " << d[1] << endl;

	cout << "Area: " << Area() << endl;
	*/
}