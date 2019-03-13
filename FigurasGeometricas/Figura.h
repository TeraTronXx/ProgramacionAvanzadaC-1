#pragma once
#include "stdafx.h"

using namespace std;

class Figura {

public:
	virtual double Area() = 0;
	virtual void mostrarDatos() = 0;
	void setA(double punto[2]) {
		a[0] = punto[0];
		a[1] = punto[1];
	}
	double * getA() {//devuelve un puntero
		return a;
	}
	void setB(double punto[2]) {
		b[0] = punto[0];
		b[1] = punto[1];
	}
	double * getB() {//devuelve un puntero
		return b;
	}
	void setC(double punto[2]) {
		c[0] = punto[0];
		c[1] = punto[1];
	}
	double * getC() {//devuelve un puntero
		return c;
	}
	void setD(double punto[2]) {
		d[0] = punto[0];
		d[1] = punto[1];
	}
	double * getD() {//devuelve un puntero
		return d;
	}

	void setCentro(double punto[2]) {
		centro[0] = punto[0];
		centro[1] = punto[1];
	}
	void setRadio(double r) {
		radio = r;
	}

protected: 
	double a[2];
	double b[2];
	double c[2];
	double d[2];

	double centro[2];
	double radio;
};

