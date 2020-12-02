#include <iostream>
#include <windows.h>
#include "Car.h"

Car::Car():has_spoiler(false)
{}

Car::Car(const std::string& model, const std::string& vendor, const std::string& company,
	const short& engine_no, const float& volume, const bool& has_spoiler)
	:Transport(model, vendor, company, engine_no, volume)
{
	Set_spoiler(has_spoiler);
}

void Car::Set_spoiler(const bool& has_spoiler)
{
	this->has_spoiler = has_spoiler;
}

bool Car::Get_spoiler() const
{
	return has_spoiler;
}

void Car::Show_Car() const
{
	std::cout << "\n\nCar Information:\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);
	Show_Transport_Info();
	Show_Engine();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GREEN);

	std::cout << "Car has ";
	if (Get_spoiler())
		std::cout << "spoiler\n";
	else
		std::cout << "not spoiler\n";
}