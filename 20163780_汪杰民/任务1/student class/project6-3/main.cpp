#include<iostream>
#include<string>
#include"student.h"
using namespace std;
int main()
{
	int flag;
	student *p;
    poststud d;
	p = &d;
	string f, l;
	cin >> flag;
	if (flag == 0)
	{
		p->displaynameid();
		f = p->getmajor();
		l = p->getadvisor();
		cout << f << endl;
		cout << l << endl;
	}
	if (flag!= 0)
	{
		p->setnameid();
		p->setmajor();
		p->setadvisor();
		p->displaynameid();
		f = p->getmajor();
		l = p->getadvisor();
		cout << f << endl;
		cout << l << endl;
	}
}