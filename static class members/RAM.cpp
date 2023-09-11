#include "RAM.h"
#include <cstring>

RAM::RAM()
{
	this->name = this->type_name = nullptr;
	work_frequency = 0;
	price = 0;
};
RAM::RAM(char* name) 
{
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name, strlen(name) + 1, name);
};
RAM::RAM(char* name, char* type_name) :RAM(name)
{
	this->type_name = new char[strlen(type_name) + 1];
	strcpy_s(this->type_name, strlen(type_name) + 1, type_name);

};
RAM::RAM(char* name, char* type_name, unsigned int work_frequency) :RAM(name, type_name)
{
	this->work_frequency = work_frequency;
};
RAM::RAM(char* name, char* type_name, unsigned int work_frequency, double price) : RAM(name, type_name, work_frequency) 
{
	this->price = price;
};
RAM::~RAM() 
{
	if (this->name != nullptr)
		delete[]this->name;
	if(this->type_name!=nullptr)
		delete[]this->type_name;
};
char* RAM:: get_name()
{
	return this->name;
}
char* RAM::get_type_name()
{
	return this->type_name;
}
unsigned int RAM:: get_work_frequency()
{
	return this->work_frequency;
}
double RAM::get_price()
{
	return this->price;
}
void RAM::set_name(const char* name)
{
	if (this->name != nullptr)
		delete[]this->name;
	this->name = new char[strlen(name) + 1];
}
void RAM::set_type_name(const char* type_name)
{
	if (this->type_name != nullptr)
		delete[]this->type_name;
	this->type_name = new char[strlen(type_name) + 1];
}
void RAM::set_work_frequency(unsigned int work_frequency)
{
	this->work_frequency = work_frequency;
}
void RAM::set_price(double price)
{
	this->price = price;
}