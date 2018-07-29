#ifndef DEF_CUSTOMER
#define DEF_CUSTOMER

#include <string>

class Customer{
public :
	//Constructors
	Customer();
	Customer(std::string m_customNumber);
	//Some methods
	std::string getCustomerNumber(Customer c);

	//destructor
	~Customer();

private:
	std::string m_customerNumber;
};
#endif