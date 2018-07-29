#include <iostream>
#include <fstream>
#include <string>

#include "Customer.h"
#include "Consumption.h"

using namespace std;

int main(){
	
	Consumption::recordAComsumption();
	Consumption::showConsumptionsList();
	
	return 0x0;
}