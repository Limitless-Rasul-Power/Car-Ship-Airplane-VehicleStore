#include <iostream>
#include <windows.h>
#include "Ship.h"

Ship::Ship() :has_sail(false)
{}

Ship::Ship(const std::string& model, const std::string& vendor, const std::string& company,
	const short& engine_no, const float& volume, const bool& has_sail)
	:Transport(model, vendor, company, engine_no, volume)
{
	Set_sail(has_sail);
}

void Ship::Set_sail(const bool& has_sail)
{
	this->has_sail = has_sail;
}

bool Ship::Get_sail() const
{
	return has_sail;
}

void Ship::Show_Ship() const
{
	std::cout << "\n\nShip Information\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), OCEANBLUE);
	Show_Transport_Info();

	std::cout << "Ship Engine Information\n\n";
	Show_Engine();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), OCEANBLUE);

	std::cout << "\nShip has ";
	if (Get_sail())
		std::cout << "sail\n\n";
	else
		std::cout << "not sail\n\n";
}