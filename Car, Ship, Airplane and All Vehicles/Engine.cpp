#include <iostream>
#include <assert.h>
#include <windows.h>
#include "Engine.h"

Engine::Engine() :engine_no(0), company(""), volume(0.0f)
{}

Engine::Engine(const std::string& company)
{
	Set_company(company);
}

Engine::Engine(const std::string& company, const short& engine_no)
	:Engine(company)
{	
	Set_no(engine_no);
}

Engine::Engine(const std::string& company, const short& engine_no, const float& volume)
	:Engine(company, engine_no)
{
	Set_volume(volume);
}

void Engine::Set_company(const std::string& company)
{
	assert(!company.empty() && "Company is empty!");
	this->company = company;
}

std::string Engine::Get_company() const
{
	return company;
}

void Engine::Set_no(const short& engine_no)
{
	assert(engine_no > 0 && "Engine Number must be more than 0!");
	this->engine_no = engine_no;
}

unsigned short Engine::Get_engine_no() const
{
	return engine_no;
}

void Engine::Set_volume(const float& volume)
{
	assert(volume > 0 && "Volume must be more than 0!");
	this->volume = volume;
}

float Engine::Get_volume() const
{
	return volume;
}

void Engine::Show_Engine() const
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	std::cout << "Engine Company: " << Get_company() << '\n';
	std::cout << "Engine No_" << Get_engine_no() << '\n';
	std::cout << "Engine Volume: " << Get_volume() << '\n';
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}