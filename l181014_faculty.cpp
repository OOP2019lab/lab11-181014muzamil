#include"faculty.h"

faculty::faculty(string fname,string lname,int age,int count_course,int tel_no):person(fname,lname,age)
{
	course_count=count_course;
	telephone_ex_no=tel_no;
	cout<<"faculty(str,str,int,int,int) called"<<endl;
}

int faculty::getcourse_c()
{
	return course_count;
}
void faculty::setcourse_c(int cc)
{
	course_count=cc;
}
int faculty::gettel_no()
{
	return telephone_ex_no;
}
void faculty::settel_no(int tel_no)
{
	telephone_ex_no=tel_no;
}

faculty::~faculty()
{
cout<<"~faculty() called"<<endl;
}

void faculty::printfaculty()
{
	printInformation("f");
	cout<<"Name of courses:"<<course_count<<" Ext:"<<telephone_ex_no<<endl;
}