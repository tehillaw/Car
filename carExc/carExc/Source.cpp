#include <iostream>
using namespace std;
#include <string>
#include "car.h"
#include <assert.h>

int main()
{
	string _make, _model;
	int _year, _engineVolume;
	char _color[10];
	cout << "Enter car details: make, model, year, engine volume and color" << endl;
	cin >> _make >> _model >> _year >> _engineVolume >> _color;
	Car c(_make, _model, _year, _engineVolume, _color);
	cout << c;

	cout << "Enter second car details: make, model, year, engine volume and color" << endl;
	cin >> _make >> _model >> _year >> _engineVolume >> _color;
	Car c2(_make, _model, _year, _engineVolume, _color);
	cout << c2;

	Car compByYear = c.CompareByYear(c2);
	cout << "The older car is: \n" << compByYear;

	Car compareByEngine = c.CompareByEngineVolume(c2);
	cout << "The bigger car by engine value is: \n" << compareByEngine;

}