// Vector3D.h

#pragma once
#include "Triad.h"

class Vector3D
{
private:
	Triad triad;
public:
	void SetTriad(Triad value) { this->triad = value; };
	Triad GetTriad() const { return triad; };

	void Init(Triad triad);
	void Display();
	void Read();
	string toString();

	friend Vector3D AddVector(Vector3D, Vector3D);
	friend int ScalarVector(Vector3D, Vector3D);
};