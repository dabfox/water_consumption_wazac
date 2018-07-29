#ifndef DEF_CONSUMPTION
#define DEF_CONSUMPTION

#include <string>
#include <fstream>
#include <iostream>

class Consumption{
public :
	Consumption();
	static void recordAComsumption();
	static void showConsumptionsList();

private:
	std::string m_monthOfConsumption;
	int m_yearOfConsumption;
	double m_consumptionQuantity;
};
#endif