#include "person.h"
#pragma once
class student:private person
{
private:
	float gpa;
public:
	student(string fname,string lname,int age,float gpa);
	float getgpa();
	void setgpa(float gpa);
    void printStudent();
	~student();
};