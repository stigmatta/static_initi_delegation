#pragma once
class CPU
{
	char* name;
	double price;
	unsigned int cores;
	double cash_size;
public:
	CPU() {};
	CPU(const char* name) {};
	CPU(const char* name, double price) :CPU(name) {};
	CPU(const char* name, double price, unsigned int cores) :CPU(name, price) {};
	CPU(const char* name, double price, unsigned int cores, double cash_size) : CPU(name, price, cores) {};
	CPU(const CPU& c) {};
	~CPU() {};
	char* get_name();
	double get_price();
	unsigned int get_cores();
	double get_cash_size();
	void set_name(const char* name);
	void set_price(double price);
	void set_cores(unsigned int cores);
	void set_cash_size(double cash_size);
	void input(const char* name, double price, unsigned int cores, double cash_size);
	void print() {};


};

