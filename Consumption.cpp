#include "Consumption.h"
#include "Customer.h"

using namespace std;

void Consumption::recordAComsumption(){
	//The file path
	string const xlsFile("water_consumption_xls.txt");
	ofstream xlsIsReady(xlsFile.c_str(),  ios::app);

	string customerNumber, consomptionMonth;
	int consumptionYear(2018);
	double consumptionQuantity;

	cout << endl;
	cout << "Customer info" << endl;
	cout <<  endl;
	cout << "Type in a customer number : " << endl;
	cin >> customerNumber;
	cout <<endl;
	cout <<  endl;
	cout << "Consumption info for " << customerNumber << " Customer "<< endl;
	cout <<  endl;
	cout << "Type in the month of consumption : " << endl;
	cin >> consomptionMonth;
	cout << "Type in the consumption quantity (a number) : " << endl;
	cin >> consumptionQuantity;
	if(xlsIsReady){
		xlsIsReady<<customerNumber<<"|";
		xlsIsReady<<consomptionMonth<<"|";
		xlsIsReady<<consumptionYear<<"|";
		xlsIsReady<<consumptionQuantity<< endl;
	}else{
	cout << "ERROR: Check your xls file path properly." << endl;
	}
}

void showConsumptionsList(){

	string const xlsFile("water_consumption_xls.txt");
	ifstream xlsIsReady(xlsFile.c_str());
	if(xlsIsReady)
	{
		string aSingleConsumption; 

		while(getline(xlsIsReady, aSingleConsumption))
		{
		cout << aSingleConsumption << endl; 
		}
	}
	else
	{
	cout << "ERROR: Check your xls file path properly." <<endl;
	}
}