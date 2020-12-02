#include <iostream>
#include "All_Vehicles_Store.h"

using namespace std;

unsigned short Transport::transport_id = 0;

int main()
{
	Car* c1 = new Car("GIULIA QUADRIFOGLIO", "Alfa Romeo", "NightSky", 555, 333.12f, true);
	Car* c2 = new Car("Chiron", "Bugatti", "NightSky", 666, 230.87f, true);
	Car* c3 = new Car("Veneno", "Lamborghini", "NightSky", 999, 279.23f, true);

	Engine e4("Morningstar", 111, 567.34f);
	Engine e5("NightSky", 333, 999.12f);
	Engine e6("Autumn Rain", 222, 678.910f);

	Engine* mult = new Engine[3]{ e4, e5, e6 };


	Airplane* a1 = new Airplane("Ro Stars", "Rasul", 3, 1000, mult);
	Airplane* a2 = new Airplane("Ro Stars", "Tony Robbins", 3, 1000, mult);
	Airplane* a3 = new Airplane("Ro Stars", "Mike Tyson", 3, 1000, mult);

	Ship* s1 = new Ship("RO Star", "Mr.Bean", "Rasul's Luxuries", 6666, 999.111f, false);
	Ship* s2 = new Ship("RO Star", "Elon Musk", "Rasul's Luxuries", 6666, 999.111f, true);
	Ship* s3 = new Ship("RO Star", "Nikola Tesla", "Rasul's Luxuries", 6666, 999.111f, true);

	Stack<Car>* cars = new Stack<Car>;
	cars->Push(c1);
	cars->Push(c2);
	cars->Push(c3);

	Stack<Airplane>* airs = new Stack<Airplane>;
	airs->Push(a1);
	airs->Push(a2);
	airs->Push(a3);

	Stack<Ship>* ships = new Stack<Ship>;
	ships->Push(s1);
	ships->Push(s2);
	ships->Push(s3);

	Vehicles v(cars, ships, airs);
	v.Show_All_Vehicles();

	system("pause");
	return 0;
}