#include <iostream>
#include <windows.h>
#include <assert.h>
#include "All_Vehicles_Store.h"

Vehicles::Vehicles() :cars(nullptr), airplanes(nullptr), ships(nullptr)
{}

Vehicles::Vehicles(Stack<Car>* const& cars, Stack<Ship>* const& ships, Stack<Airplane>* const& airplanes)
{
	this->cars = cars;
	this->ships = ships;
	this->airplanes = airplanes;
}

void Vehicles::Show_All_Cars() const
{
	std::cout << "\n\nAll Cars Information, We Have " << cars->Get_length() << " Cars!\n\n";
	for (short i = 0; i < cars->Get_length(); i++)
		cars[0][i]->Show_Car();
}

void Vehicles::Show_All_Ships() const
{
	std::cout << "\n\nAll Ships Information, We Have " << ships->Get_length() << " Ships!\n\n";
	for (unsigned short i = 0; i < ships->Get_length(); i++)
		ships[0][i]->Show_Ship();
}

void Vehicles::Show_All_Airplanes() const
{
	std::cout << "\n\nAll Airplanes Information, We Have " << airplanes->Get_length() << " Airplanes!\n\n";
	for (unsigned short i = 0; i < airplanes->Get_length(); i++)
		airplanes[0][i]->Show_Airplane();
}

void Vehicles::Show_All_Vehicles() const
{
	Show_All_Cars();
	std::cout << "\n\n===================\n\n";
	Show_All_Ships();
	std::cout << "\n\n===================\n\n";
	Show_All_Airplanes();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}

Vehicles::~Vehicles()
{
	delete cars;
	delete airplanes;
	delete ships;
}