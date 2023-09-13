#include "Laptop.h"
#include "CPU.h"
#include "HDD.h"
#include "RAM.h"
#include "Videocard.h"
#include <cstring>
#include <iostream>

using namespace std;
Laptop::Laptop() 
{
	this->name = this->color = nullptr;
	this->price = 0;
	laptops++;
	cout << "Laptop constructor by default" << endl;
};
Laptop::Laptop(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	laptops++;

};
Laptop::Laptop(const char* name, double price)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->price = price;
	laptops++;

};
Laptop::Laptop(const char* name, double price, const char* color)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->price = price;
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
	laptops++;

};
Laptop::Laptop(const char* name, double price, const char* color, char* cpu_name, double cpu_price, unsigned int cpu_cores, double cash_size)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->price = price;
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
	laptops++;

};
Laptop::Laptop(const char* name, double price, const char* color, const char* cpu_name, double cpu_price, unsigned int cpu_cores, double cash_size, const char* videocard_name, const char* videomemory, unsigned int bandwidth, unsigned int videomemory_capacity): cpu(cpu_name, cpu_price, cpu_cores, cash_size),videocard(videocard_name, videomemory, bandwidth, videomemory_capacity)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->price = price;
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
	laptops++;

};
Laptop::Laptop(const char* name, double price, const char* color, const char* cpu_name, double cpu_price, unsigned int cpu_cores, double cash_size, const char* videocard_name, const char* videomemory, unsigned int bandwidth, unsigned int videomemory_capacity, const char* hdd_name, double hdd_price, double form_factor): cpu(cpu_name, cpu_price, cpu_cores, cash_size), videocard(videocard_name, videomemory, bandwidth, videomemory_capacity), hdd(hdd_name, hdd_price, form_factor)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->price = price;
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
	laptops++;

};
Laptop::Laptop(const Laptop& l) 
{
	this->name = new char[strlen(l.name) + 1];
	strcpy_s(this->name, strlen(l.name) + 1, l.name);
	this->color = new char[strlen(l.color) + 1];
	strcpy_s(this->color, strlen(l.color) + 1, l.color);
	this->price = l.price;
	cpu = l.cpu;
	videocard = l.videocard;
	hdd = l.hdd;
	laptops++;

};
Laptop::~Laptop()
{
	if (this->name != nullptr)
		delete[]this->name;
	if (this->color != nullptr)
		delete[]this->color;
	cout << "Laptop destructor" << endl;
	laptops--;
};
char* Laptop:: get_name()
{
	return this->name;
};
double Laptop:: get_price() 
{
	return this->price;
};
char* Laptop:: get_color()
{
	return this->color;
};
void Laptop::set_name(const char* name)
{
	if (this->name != nullptr)
		delete[]this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
};
void Laptop::set_price(double price) 
{
	this->price = price;
};
void Laptop::set_color(const char * color)
{
	if (this->color != nullptr)
		delete[]this->color;
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
};
void Laptop::print()
{
	cout << "Name: " << this->name << endl;
};

