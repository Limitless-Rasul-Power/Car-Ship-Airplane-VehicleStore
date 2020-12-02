#include <iostream>
#include <assert.h>
#include "Transport.h"

Transport::Transport() :id(0), model(""), vendor("")
{}

Transport::Transport(const std::string& model, const std::string& vendor)
{
	Set_model(model);
	Set_vendor(vendor);
	Set_id();
}

Transport::Transport(const std::string& model, const std::string& vendor, const std::string& company, const short& engine_no, const float& volume)
	:Engine(company, engine_no, volume)
{
	Set_model(model);
	Set_vendor(vendor);
	Set_id();
}

void Transport::Set_id()
{
	this->id = ++transport_id;
}

unsigned short Transport::Get_id() const
{
	return id;
}

void Transport::Set_model(const std::string& model)
{
	assert(!model.empty() && "Model is Empty!");
	this->model = model;

}

std::string Transport::Get_model() const
{
	return model;
}

void Transport::Set_vendor(const std::string& vendor)
{

	assert(!vendor.empty() && "Vendor is Empty!");
	this->vendor = vendor;

}

std::string Transport::Get_vendor() const
{
	return vendor;
}

void Transport::Show_Transport_Info() const
{
	std::cout << "ID: " << id << '\n';
	std::cout << "Model: " << model << '\n';
	std::cout << "Vendor: " << vendor << '\n';
}