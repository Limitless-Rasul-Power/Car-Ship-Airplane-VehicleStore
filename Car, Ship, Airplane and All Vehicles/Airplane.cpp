#include <iostream>
#include <windows.h>
#include <assert.h>
#include "Airplane.h"

Airplane::Airplane() :engine_count(0), passenger_capacity(0), engine(nullptr)
{}

Airplane::Airplane(const std::string& model, const std::string& vendor, const short& engine_count,
	const short& passenger_capacity, Engine* const& engine)
	:Transport(model, vendor)
{

	Set_engine_count(engine_count);
	Set_passenger_capacity(passenger_capacity);
	Set_engine(engine);
}

void Airplane::Set_engine_count(const short& engine_count)
{
	assert(engine_count > 0 && "Engine count must be more than 0!");
	this->engine_count = engine_count;
}

unsigned short Airplane::Get_engine_count() const
{
	return engine_count;
}

void Airplane::Set_passenger_capacity(const short& passenger_capacity)
{
	assert(passenger_capacity > 0 && "Passenger Capacity must be more than 0!");
	this->passenger_capacity = passenger_capacity;
}

unsigned short Airplane::Get_passenger_capacity() const
{
	return passenger_capacity;
}

void Airplane::Set_engine(Engine* const& engine)
{
	assert(engine && "Engine is nullptr!");
	this->engine = new Engine[this->engine_count];

	for (unsigned short i = 0; i < Get_engine_count(); i++)
		this->engine[i] = engine[i];
}

Engine* Airplane::Get_engine() const
{
	return engine;
}

void Airplane::Show_Airplane() const
{
	std::cout << "\n\nAirplane Information\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), SKYBLUE);
	Show_Transport_Info();

	std::cout << "Engine Count: " << Get_engine_count() << "\n\n";
	for (unsigned short i = 0; i < Get_engine_count(); i++)
	{
		std::cout << "#" << i + 1 << ",Engine Information\n";
		engine[i].Show_Engine();
		std::cout << "\n\n";
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), SKYBLUE);
	std::cout << "Passenger capacity: " << passenger_capacity << "\n\n";
}

Airplane::~Airplane()
{
	if (Get_engine_count() > 1)
		delete[] engine;
	else
		delete engine;
}

