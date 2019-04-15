#include"student.h"

student::student(string fname,string lname,int age,float gpa):person(fname,lname,age)
{
this->gpa=gpa;
cout<<"student(str,str,int,float) called"<<endl;
}

float student::getgpa()
{
	return gpa;
}
void student::setgpa(float gpa)
{
	this->gpa=gpa;
}

void student::printStudent()
{
	 printInformation("s");
     cout<<" years old, his cgpa is " << gpa<<endl;
}


student::~student()
{
cout<<"~student() called"<<endl;
}