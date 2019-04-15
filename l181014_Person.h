#include<iostream>
#include<string>
#pragma once
using namespace std;

class person
{
private:
	string first_name;
    string last_name;
protected:
	int age;
public:
	person(string fname,string lname,int age);
	~person();
	string  getfname();
	void setfname(string fname);
	string  getlname();
	void setlname(string lname);
	int  getfage();
	void setage(int age);
	void printInformation(string i);
};