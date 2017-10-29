#include "car.h"
#include <string>
#include <assert.h>

//constructor
Car::Car(string m, string mo, int y, int eV, char* co)
{
	make = m;
	model = mo;
	//assert(y >= 0 && y <= 9999);
	if (y >= 0 && y <= 9999)
	{
		year = y;
	}
	//assert(eV >= 0);
	if (eV >= 0)
	{
		engineVolume = eV;
	}
	strcpy_s(color, 10, co);
}

//distructor
Car::Car()
{
}

//distructor
Car::~Car()
{
}

//operation <<
std::ostream& operator<<(std::ostream& os, const Car& c)
{
	os << "make: " << c.make << "\nmodel: " << c.model << "\nyear: " << c.year << "\nengine volume: " << c.engineVolume << "\ncolor: " << c.color << endl;;
	return os;
}

void Car::SetMake(string m)
{
	assert(m != "");
	if (m != "")
	{
		make = m;
	}
}
void Car::SetModel(string m)
{
	assert(m != "");
	if (m != "")
	{
		model = m;
	}
}
void Car::SetYear(int y)
{
	year = y;
}
void Car::SetEngineVolume(int e)
{
	engineVolume = e;
}
void Car::SetColor(char* co)
{
	strcpy_s(color, 10, co);
}

Car Car::CompareByYear(Car & c2)
{
	if (year >= c2.year)
	{
		return *this;
	}
	else
	{
		return c2;
	}
}

Car Car::CompareByEngineVolume(Car & c2)
{
	if (engineVolume >= c2.engineVolume)
	{
		return *this;
	}
	else
	{
		return c2;
	}
}