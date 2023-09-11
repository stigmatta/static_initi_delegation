#include "CPU.h"
#include <cstring>
CPU::CPU() 
{
	name = nullptr;
	price = cash_size = 0;
	cores = 0;
};
CPU::CPU(char* name) 
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
};
CPU::CPU(char* name, double price) :CPU(name) 
{
	this->price = price;
};
CPU::CPU(char* name, double price, unsigned int cores) :CPU(name, price) 
{
	this->cores = cores;
};
CPU::CPU(char* name, double price, unsigned int cores, double cash_size) : CPU(name, price, cores) 
{
	this->cash_size = cash_size;
};
~CPU() 
{
	if(this->name!=nullptr)
		delete []this->name;
};
char* CPU:: get_name()
{
	return this->name;
}
double CPU::get_price()
{
	return this->price;
}
unsigned int CPU::get_cores()
{
	return this->cores;
}
double CPU::get_cash_size()
{
	return this->cash_size;
}
void CPU::set_name(const char* name)
{
	if (this->name != nullptr)
		delete[]this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void CPU::set_price(double price)
{
	this->price = price;
}
void CPU::set_cores(unsigned int cores)
{
	this->cores = cores;
}
void CPU::set_cash_size(double cash_size)
{
	this->cash_size = cash_size;
}