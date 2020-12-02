#pragma once
#include <string>
#define RED 12
#define GREEN 10
#define OCEANBLUE 9
#define SKYBLUE 11
#define WHITE 7

class Engine
{

private:
	unsigned short engine_no;
	std::string company;
	float volume;

public:

	Engine();

	Engine(const std::string& company);

	Engine(const std::string& company, const short& engine_no);

	Engine(const std::string& company, const short& engine_no, const float& volume);

	void Set_company(const std::string& company);
	std::string Get_company() const;

	void Set_no(const short& engine_no);
	unsigned short Get_engine_no() const;

	void Set_volume(const float& volume);
	float Get_volume() const;

	void Show_Engine() const;

};