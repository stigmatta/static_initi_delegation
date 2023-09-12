#pragma once
class HDD
{
private:
	char* name;
	double price;
	double form_factor;
public:
	HDD() {};
	HDD(const char* name) {};
	HDD(const char* name, double price) {};
	HDD(const char* name, double price, double form_factor) {};
	HDD(const HDD& h) {};
	~HDD() {};
	char* get_name() {};
	double get_price() {};
	double get_form_factor() {};
	void set_name(const char*name) {};
	void set_price(double price) {};
	void set_form_factor(double form_factor) {};
	void input(const char* name, double price, double form_factor) {};
	void print() {};

};

