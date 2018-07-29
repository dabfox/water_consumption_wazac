#include "Customer.h"

using namespace std;

Customer::Customer(){

}

Customer::Customer(string customerNumber){

}


string Customer::getCustomerNumber(Customer c){
	//Get the custom number, from a Object as a arg
	return c.m_customerNumber;
}

Customer::~Customer(){
//Meaningfull if memory, dynamically allocated
}