#pragma once
#include "Transport.h"
class Airplane : virtual protected Transport
{
private:
	unsigned short engine_count;
	unsigned short passenger_capacity;
	Engine* engine;

public:

	Airplane();

	Airplane(const std::string& model, const std::string& vendor, const short& engine_count,
		const short& passenger_capacity, Engine* const& engine);

	void Set_engine_count(const short& engine_count);
	unsigned short Get_engine_count() const;

	void Set_passenger_capacity(const short& passenger_capacity);
	unsigned short Get_passenger_capacity() const;

	void Set_engine(Engine* const& engine);
	Engine* Get_engine() const;

	void Show_Airplane() const;

	~Airplane();

};