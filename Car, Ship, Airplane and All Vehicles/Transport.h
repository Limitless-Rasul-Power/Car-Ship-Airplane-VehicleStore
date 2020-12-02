#pragma once
#include "Engine.h"
class Transport : protected Engine
{

private:
	unsigned short id;
	std::string model;
	std::string vendor;

public:

	static unsigned short transport_id;

	Transport();

	Transport(const std::string& model, const std::string& vendor);

	Transport(const std::string& model, const std::string& vendor, const std::string& company, const short& engine_no, const float& volume);

	void Set_id();
	unsigned short Get_id() const;

	void Set_model(const std::string& model);
	std::string Get_model() const;

	void Set_vendor(const std::string& vendor);
	std::string Get_vendor() const;

	void Show_Transport_Info() const;

};