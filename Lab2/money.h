#pragma once
#include <string>

class money
{
private:
	long grn;
	unsigned char coin;
public:
	money init(long a, unsigned char b);
	void read();
	void display();
	std::string tostring();
	money add(long a, unsigned char b);
	money sub(long a, unsigned char b);
	money divide(int a);
	money dividefloat(float a);
	money multiplyfloat(float a);
	void compare(money a);
};

