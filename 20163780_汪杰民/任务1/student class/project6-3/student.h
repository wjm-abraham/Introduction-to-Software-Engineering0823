#pragma once
#include<iostream>
#include<string>
using namespace std;
class student
{
public:
	student(string x, int y);
	~student();
	void setnameid();
	void displaynameid();
	virtual void setmajor() = 0;
	virtual string getmajor()= 0;
	virtual void setadvisor()= 0;
	virtual string getadvisor() = 0;
protected:
	string m;
	int n;
};
class understud :public student
{
public:
	understud(string x, int y, string z) :student(x,y)
	{
		m = x;
		n = y;
		q = z;
	}
	virtual void setmajor() 
	{
		cin >> q;
	}
	virtual string getmajor() 
	{
		return q;
	}
protected:
	string q;
};
class poststud :public understud
{
private:
	string j;
public:
	poststud(string x = "***", int y = -1, string z = "###", string k = "&&&");
	virtual void setadvisor()
	{
		cin >> j;
	}
	virtual string getadvisor()
	{
		return j;
	}
};


