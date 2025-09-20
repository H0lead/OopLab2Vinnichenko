#include <iostream>
#include "money.h"
#include <string>
using namespace std;

int main()
{
	money a, b, c, d, e;
	a = a.init(100, 6);
	cout << "a = ";
	a.display();
	cout << endl;
	b.read();
	cout << "b = ";
	b.display();
	cout << endl;
	string test = "";
	test = a.tostring();
	cout << "To string a test: " << test << endl;
	a = a.add(100, 45);
	cout << "a after add = ";
	a.display();
	cout << endl;
	a = a.sub(42, 90);
	cout << "a after sub = ";
	a.display();
	cout << endl;
	a = a.divide(6);
	cout << "a after divide = ";
	a.display();
	cout << endl;
	a = a.dividefloat(2.4);
	cout << "a after float divide = ";
	a.display();
	cout << endl;
	a = a.multiplyfloat(4.7);
	cout << "a after multiply float = ";
	a.display();
	cout << endl;
	c = b.init(51, 37);
	d = c.init(51, 26);
	e = e.init(51, 38);
	a.compare(b);
	a.compare(c);
	a.compare(d);
	a.compare(e);
}