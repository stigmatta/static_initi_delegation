#include "HDD.h"
#include <cstring>
#include <iostream>

using namespace std;
HDD::HDD()
{
	this->name = nullptr;
	this->price = this->form_factor = 0;
	cout << "HDD constructor by default" << endl;
};
HDD::HDD(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
};
HDD::HDD(const char* name, double price) :HDD(name)
{
	this->price = price;
};
HDD::HDD(const char* name, double price, double form_factor) : HDD(name, price)
{
	this->form_factor = form_factor;
};
HDD::HDD(const HDD& h)
{
	this->name = new char[strlen(h.name) + 1];
	strcpy_s(this->name, strlen(h.name) + 1, h.name);
	this->price = h.price;
	this->form_factor = h.form_factor;
	cout << "Copy constructor HDD" << endl;

};

HDD::~HDD()
{
	if (this->name != nullptr)
		delete[]this->name;
	cout << "HDD destructor" << endl;
};
char* HDD::get_name() 
{
	return this->name;
};
double HDD::get_price()
{
	return this->price;
};
double HDD::get_form_factor() 
{
	return this->form_factor;
};
void HDD::set_name(const char*name)
 
	if (this->name != nullptr)
		delete[]this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
};
void HDD::set_price(double price) 
{
	this->price = price;
};
void HDD::set_form_factor(double form_factor)
{
	this->form_factor = form_factor;
};
void HDD::input(const char* name, double price, double form_factor)
{
	if (this->name != nullptr)
		delete[]this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->price = price;
	this->form_factor = form_factor;
};
void HDD::print()
{
	cout << "Name: " << this->name << endl;
	cout << "Price: " << this->price << endl;
	cout << "Form-factor: " << this->form_factor << endl;
}
