#pragma once
class Laptop
{
private:
	char* name;
	double price;//сумма всех компонентов
	char* color;
	CPU cpu;
	Videocard videocard;
	HDD hdd;
public:
	Laptop() {};
	Laptop(const char* name) {};
	Laptop(const char* name, double price) {};
	Laptop(const char* name, double price, const  char* color) {};
	Laptop(const char* name, double price, const char* color, char* cpu_name, double cpu_price, unsigned int cpu_cores, double cash_size) {};
	Laptop(const char* name, double price, const char* color, const char* cpu_name, double cpu_price, unsigned int cpu_cores, double cash_size, const char* videocard_name, const char* videomemory,unsigned int bandwidth,unsigned int videomemory_capacity) {}
	Laptop(const char* name, double price, const char* color, const char* cpu_name, double cpu_price, unsigned int cpu_cores, double cash_size, const char* videocard_name, const char* videomemory, unsigned int bandwidth, unsigned int videomemory_capacity, const char* hdd_name,double hdd_price,double form_factor) {};
	Laptop(const Laptop & l) {};
	~Laptop();
	char* get_name() {};
	double get_price() {};
	char* get_color() {};
	void set_name(const char * name) {};
	void set_price(double price) {};
	void set_color(const char* color) {};
	void print() {};
	unsigned int static laptops;
};

