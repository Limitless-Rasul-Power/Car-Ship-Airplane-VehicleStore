#pragma once
#include "Transport.h"
class Ship : virtual protected Transport
{

private:
	bool has_sail;

public:

	Ship();

	Ship(const std::string& model, const std::string& vendor, const std::string& company,
		const short& engine_no, const float& volume, const bool& has_sail);

	void Set_sail(const bool& has_spoiler);
	bool Get_sail() const;

	void Show_Ship() const;
};