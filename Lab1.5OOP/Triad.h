// Triad.h

#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Triad
{
private:
	int x, y, z;
public:
	int GetX() const { return x; };
	int GetY() const { return y; };
	int GetZ() const { return z; };

	void SetX(int value) { this->x = value; };
	void SetY(int value) { this->y = value; };
	void SetZ(int value) { this->z = value; };

	void Init(int, int, int);
	void Read();
	void Display();
	string toString() const;

	void AddNum();
	void MultiplyNum();
	friend bool AreEqual(Triad, Triad);
};