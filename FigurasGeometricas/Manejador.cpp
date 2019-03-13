#include <iostream>
#include "Rectangulo.cpp"


// Main function for the program
int main() {
	int a[2] = { 1,1 };
	int b[2] = { 1,1 };
	int c[2] = { 1,1 };
	int d[2] = { 1,1 };

	Rectangulo rect = Rectangulo (a, b, c ,d);

	/*
	// store the address of Rectangle
	shape = &rec;

	// call rectangle area.
	shape->area();

	// store the address of Triangle
	shape = &tri;

	// call triangle area.
	shape->area();
	*/
	return 0;
}