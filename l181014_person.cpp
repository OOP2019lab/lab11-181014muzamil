#include"person.h"

person::person(string fname,string lname,int age)
{
	first_name=fname;
	last_name=lname;
	this->age=age;
    cout<<"person(str,str,int) called" <<endl;
}
string person::getfname()
{
	return first_name;
}
void person::setfname(string fname)
{
	first_name=fname;
}
string person::getlname()
{
	return last_name;
}
void person::setlname(string lname)
{
	last_name=lname;
}
int person::getfage()
{
return age;
}
void person::setage(int age)
{
	this->age=age;
}

void person::printInformation(string a)
{
	if(a=="s")
	cout<<first_name<<" "<<last_name<<" is "<<age<<" years old";
	else if(a=="f")
	{
		cout<<"Faculty Member Name :"<<first_name<<" "<<last_name<<",";
		cout<<"Age:"<<age<<",";
	}
}


person::~person()
{
	cout << "~person() called"<<endl;
}

