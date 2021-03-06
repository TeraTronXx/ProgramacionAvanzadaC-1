#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Rectangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <vector>
#include <time.h>
#include <ctime> 

using namespace std;
int main()
{
	unsigned t0, t1;

	t0 = clock();

	int num;
	double centro[2];
	double radio;
	double a[2];
	double b[2];
	double c[2];
	double d[2];
	
	int largo;
	int ancho;
	srand(time(NULL));
	vector <Figura *> vec;
	//se reserva el tamaño del vector en memoria para mejorar el rendimiento
	vec.reserve(100000);

	//utilizamos el prefijo en ++i para optimizar el codigo
	for (int i = 0; i < 100000; ++i) {
		//salen numeros aleatorios del 0 al 2. 0 circulo - 1 rectangulo - 2 cuadrado
		num = rand() % 3;
		//se usa switch case en lugar de if-else para mejor rendimiento, aunque el tiempo incrementa
		switch (num) {
		//circulo
		case 0: 
		{
			centro[0] = -150 + rand() % 300;
			centro[1] = -150 + rand() % 300;
			radio = rand() % 20;
			//se inicializan las figuras en lugar de asignarlas para mejorar el rendimiento 
			Circulo *circ = new Circulo(centro, radio);
			//circ.mostrarDatos();
			vec.push_back(circ);
			break;
		}
		
		//rectangulo
		case 1:
		{
			a[0] = -150 + rand() % 300;
			a[1] = -150 + rand() % 300;
			largo = 1 + rand() % 25; //debe ser como minimo 1
			ancho = 1 + rand() % 25;
			while (ancho != largo)
				ancho = 1 + rand() % 25;
			b[0] = a[0] + ancho;
			b[1] = a[1];
			c[0] = a[0];
			c[1] = a[1] + largo;
			d[0] = b[0];
			d[1] = c[1];
			//se inicializan las figuras en lugar de asignarlas para mejorar el rendimiento 
			Rectangulo *rect = new Rectangulo(a, b, c, d);
			//rect.mostrarDatos();
			vec.push_back(rect);
			break;
		}

		case 2: //cuadrado
			a[0] = -150 + rand() % 300;
			a[1] = -150 + rand() % 300;
			largo = 1 + rand() % 25; //debe ser como minimo 1
			b[0] = a[0] + largo;
			b[1] = a[1];
			c[0] = a[0];
			c[1] = a[1] + largo;
			d[0] = b[0];
			d[1] = c[1];
			//se inicializan las figuras en lugar de asignarlas para mejorar el rendimiento 
			Cuadrado *cuad = new Cuadrado(a, b, c, d);
			//cuad.mostrarDatos();
			vec.push_back(cuad);
			break;
		}

		
		//cout << "Capacity: " << vec.capacity() << endl;
		//cout << "Size: " << vec.size() << endl;
	}
	/*for (int i = 0; i < vec.size(); ++i) {
		vec.at(i)->mostrarDatos();
	}*/

	double areaTotal=0; //incializamos aqui para mejorar rendimiento

	for (auto &var : vec) {
		areaTotal += var->Area();
	}

	printf("Area Total: %f \n", areaTotal);

	t1 = clock();

	double time = (double(t1 - t0) / CLOCKS_PER_SEC);
	printf("Execution Time: %f\n", time);
	return 0;
}

