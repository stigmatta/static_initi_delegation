#pragma once
class RAM
{
	char* name;
	char* type_name;
	unsigned int work_frequency;
	double price;
public:
	RAM() {};
	RAM(char* name) {};
	RAM(char* name, char* type_name) :RAM(name) {};
	RAM(char* name, char* type_name, unsigned int work_frequency) :RAM(name, type_name) {};
	RAM(char* name, char* type_name, unsigned int work_frequency, double price) : RAM(name, type_name, work_frequency) {};
	~RAM() {};
	char* get_name();
	char* get_type_name();
	unsigned int get_work_frequency();
	double get_price();
	void set_name(const char* name);
	void set_type_name(const char* type_name);
	void set_work_frequency(unsigned int work_frequency);
	void set_price(double price);
};

