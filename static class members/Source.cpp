#include <iostream>
#include "Laptop.h"
using namespace std;
unsigned int Laptop::laptops = 0;
int main()
{
	Laptop laptop1();
	Laptop laptop2("Lenovo");
	Laptop laptop3("Lenovo", 128.6);
	Laptop laptop4("ASUS", 250, "White");
	Laptop laptop6 = laptop1();
}