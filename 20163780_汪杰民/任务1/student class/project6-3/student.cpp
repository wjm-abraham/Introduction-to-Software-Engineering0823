#include "student.h"
#include<iostream>
using namespace std;
student::student(string x, int y)
{
	m = x;
	n = y;
}
student::~student()
{
}
void student::setnameid()
{
	cin >> m >> n;
}
void student::displaynameid()
{
	cout << m << " "<<n << endl;
}
poststud::poststud(string a, int b, string c, string d) :understud(a,b,c)
{
	m = a;
	n = b;
	q = c;
	j = d;
}
