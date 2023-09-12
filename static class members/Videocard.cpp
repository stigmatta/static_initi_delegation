#include "Videocard.h"
#include <cstring>
#include <iostream>

using namespace std;
Videocard::Videocard()
{
	this->name = this->videomemory = 0;
	this->bandwidth = this->price = 0;
	cout << "Constructor by default" << endl;
};
Videocard::Videocard(const char* name)
{
	this->name = new char[strlen(name) + 1 ];
	strcpy_s(this->name, strlen(name) + 1, name);
};
Videocard::Videocard(const char* name, const char* videomemory) :Videocard(name)
{
	this->videomemory = new char[strlen(videomemory) + 1];
	strcpy_s(this->videomemory, strlen(videomemory) + 1, videomemory);
};
Videocard::Videocard(const char* name, const char* videomemory, unsigned int bandwidth) :Videocard(name, videomemory)
{
	this->bandwidth = bandwidth;
};
Videocard::Videocard(const char* name, const char* videomemory, unsigned int bandwidth, unsigned int videomemory_capacity) : Videocard(name, videomemory, bandwidth)
{
	this->price = videomemory_capacity;
};
Videocard::Videocard(const Videocard& v)
{
	this->name = new char[strlen(v.name) + 1];
	strcpy_s(this->name, strlen(v.name) + 1,v.name);
	this->videomemory = new char[strlen(v.videomemory) + 1];
	strcpy_s(this->videomemory, strlen(v.videomemory) + 1, v.videomemory);
	this->bandwidth = v.bandwidth;
	this->price = v.price;
	cout << "Copy constructor videocard" << endl;

};

Videocard::~Videocard() 
{
	if (this->name!=nullptr)
		delete[]this->name;
	if (this->videomemory)
		delete[]this->videomemory;
	cout << "Videocard destructor" << endl;
};
char* Videocard::get_name()
{
	return this->name;
}
char* Videocard::get_videomemory()
{
	return this->videomemory;
}
unsigned int Videocard::get_bandwidth()
{
	return this->bandwidth;
}
unsigned int Videocard::get_videomemory_capacity()
{
	return this->price;
}
void Videocard::set_name(const char* name)
{
	if (this->name != nullptr)
		delete[]this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Videocard::set_videomemory(const char* videomemory)
{
	if (this->name != nullptr)
		delete[]this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Videocard::set_bandwidth(unsigned int bandwidth)
{
	this->bandwidth = bandwidth;
}
void Videocard::set_videomemory_capacity(unsigned int videomemory_capacity)
{
	this->price = videomemory_capacity;
}
void Videocard::input(const char* name, const char* videomemory, unsigned int bandwidth, unsigned int videomemory_capacity)
{
	if (this->name != nullptr)
		delete[]this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	if (this->videomemory != nullptr)
		delete[]this->videomemory;
	this->videomemory = new char[strlen(videomemory) + 1];
	strcpy_s(this->videomemory, strlen(videomemory) + 1, videomemory);
	this->bandwidth = bandwidth;
	this->price = videomemory_capacity;
}
void Videocard::print()
{
	cout << "Name: " << this->name << endl;
	cout << "Price: " << this->price << endl;
	cout << "Videomemory: " << this->videomemory<< endl;
	cout << "Bandwidth: " << this->bandwidth << endl;
}


