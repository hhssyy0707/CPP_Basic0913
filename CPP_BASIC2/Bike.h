#pragma once
#include "Vehicle.h"

class Bike : public Vehicle {
public:
	int Tire = 2;
	int Price = 100000;

	void PrintTire();
	void Print();
};