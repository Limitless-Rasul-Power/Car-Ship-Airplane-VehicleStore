#pragma once
#include "Car.h"
#include "Ship.h"
#include "Airplane.h"
#include "Stack.h"

class Vehicles : protected Car, protected Ship, protected Airplane
{
	Stack<Car>* cars;
	Stack<Airplane>* airplanes;
	Stack<Ship>* ships;

public:
	Vehicles();

	Vehicles(Stack<Car>* const& cars, Stack<Ship>* const& ships, Stack<Airplane>* const& airplanes);

	void Show_All_Cars() const;

	void Show_All_Ships() const;

	void Show_All_Airplanes() const;

	void Show_All_Vehicles() const;

	~Vehicles();
};