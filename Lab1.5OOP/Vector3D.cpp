// Vector3D.cpp

#include "Vector3D.h"
#include <iostream>

using namespace std;

void Vector3D::Init(Triad triad) {
	SetTriad(triad);
}

void Vector3D::Display() {
	cout << toString() << endl;
}

void Vector3D::Read() {
	Triad t;
	t.Read();
	Init(t);
}

string Vector3D::toString() {
	stringstream sout;
	sout << " Vector = " << triad.toString();
	return sout.str();
}

Vector3D AddVector(Vector3D V1, Vector3D V2) {
	Vector3D V3;
	int x = V1.triad.GetX() + V2.triad.GetX(),
		y = V1.triad.GetY() + V1.triad.GetY(),
		z = V1.triad.GetZ() + V2.triad.GetZ();

	V3.triad.Init(x, y, z);
	return V3;
}

int ScalarVector(Vector3D V1, Vector3D V2) {
	return V1.triad.GetX() * V2.triad.GetX() + V1.triad.GetY() * V2.triad.GetY() + V1.triad.GetZ() * V2.triad.GetZ();
}