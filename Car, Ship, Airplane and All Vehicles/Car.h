#pragma once
#include "Transport.h"
class Car : virtual protected Transport
{
private:
	bool has_spoiler;

public:

	Car();

	Car(const std::string& model, const std::string& vendor, const std::string& company,
		const short& engine_no, const float& volume, const bool& has_spoiler);

	void Set_spoiler(const bool& has_spoiler);
	bool Get_spoiler() const;

	void Show_Car() const;

};