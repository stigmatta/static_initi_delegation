#include "CPU.h"
#include <cstring>
#include <iostream>
using namespace std;
CPU::CPU() 
{
	name = nullptr;
	price = cash_size = 0;
	cores = 0;
	cout << "CPU constructor by default" << endl;
};
CPU::CPU(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

};
CPU::CPU(const char* name, double price) :CPU(name)
{
	this->price = price;
};
CPU::CPU(const char* name, double price, unsigned int cores) :CPU(name, price)
{
	this->cores = cores;
};
CPU::CPU(const char* name, double price, unsigned int cores, double cash_size) : CPU(name, price, cores)
{
	this->cash_size = cash_size;
};
CPU::CPU(const CPU &c) 
{
	this->name = new char[strlen(c.name) + 1];
	strcpy_s(this->name, strlen(c.name) + 1, c.name);
	this->price = c.price;
	this->cash_size = c.cash_size;
	this->cores = c.cores;
	cout << "Copy constructor CPU" << endl;
};

CPU::~CPU() 
{
	if(this->name!=nullptr)
		delete []this->name;
	cout << "CPU destructor" << endl;
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
void CPU::input(const char* name, double price, unsigned int cores, double cash_size)
{
	if (this->name != nullptr)
		delete[]this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->price = price;
	this->cores = cores;
	this->cash_size = cash_size;
}
void CPU::print()
{
	cout << "Name: " << this->name << endl;
	cout << "Price: " << this->price << endl;
	cout << "Cores: " << this->cores << endl;
	cout << "Cash size: " << this->cash_size << endl;
}
