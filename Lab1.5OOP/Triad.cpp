// Triad.cpp

#include "Triad.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void Triad::Init(int i1, int i2, int i3) {
	SetX(i1);
	SetY(i2);
	SetZ(i3);
}

void Triad::Read() {
	int x, y, z;

	cout << " Enter x: "; cin >> x;
	cout << " Enter y: "; cin >> y;
	cout << " Enter z: "; cin >> z;

	Init(x, y, z);
}

void Triad::Display() {
	cout << toString() << endl;
}

string Triad::toString() const{
	stringstream sout;
	sout << " ( " << x << " ; " << y << " ; " << z << " )" << endl;
	return sout.str();
}

void Triad::AddNum() {
	int a;
	cout << endl << " Enter number to add: "; cin >> a;

	this->x += a;
	this->y += a;
	this->z += a;
}

void Triad::MultiplyNum() {
	int m;
	cout << endl << " Enter number to multiply: "; cin >> m;

	this->x *= m;
	this->y *= m;
	this->z *= m;
}

bool AreEqual(Triad T1, Triad T2) {
	if (T1.x == T2.x && T1.y == T2.y && T1.z == T2.z)
		return true;
	else
		return false;
}