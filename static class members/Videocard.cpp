#include "Videocard.h"
#include <cstring>
Videocard::Videocard()
{
	this->name = this->videomemory = 0;
	this->bandwidth = this->videomemory_capacity = 0;
};
Videocard::Videocard(char* name)
{
	this->name = new char[strlen(name) + 1 ];
	strcpy_s(this->name, strlen(name) + 1, name);
};
Videocard::Videocard(char* name, char* videomemory) :Videocard(name) 
{
	this->videomemory = new char[strlen(videomemory) + 1];
	strcpy_s(this->videomemory, strlen(videomemory) + 1, videomemory);
};
Videocard::Videocard(char* name, char* videomemory, unsigned int bandwidth) :Videocard(name, videomemory) 
{
	this->bandwidth = bandwidth;
};
Videocard::Videocard(char* name, char* videomemory, unsigned int bandwidth, unsigned int videomemory_capacity) : Videocard(name, videomemory, bandwidth) 
{
	this->videomemory_capacity = videomemory_capacity;
};
Videocard::~Videocard() 
{
	if (this->name!=nullptr)
		delete[]this->name;
	if (this->videomemory)
		delete[]this->videomemory;
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
	return this->videomemory_capacity;
}
void Videocard::set_name(const char* name)
{
	if (this->name != nullptr)
		delete[]this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}
void Videocard::set_videomemory(char* videomemory)
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
	this->videomemory_capacity = videomemory_capacity;
}