#pragma once
#include <iostream>
using namespace std;

class Car
{
public:
	string make;
	string model;
	int year;
	int engineVolume;
	char color[10];
public:
	void SetMake(string);
	void SetModel(string);
	void SetYear(int);
	void SetEngineVolume(int);
	void SetColor(char*);
	Car(string m, string mo, int y, int eV, char* co);
	Car();
	~Car();
	friend std::ostream& operator<< (std::ostream& stream, const Car& c);
	Car & CompareByYear(Car & c2);
	Car & CompareByEngineVolume(Car & c2);
};

