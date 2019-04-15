#include"person.h"
#include"student.h"
#include"faculty.h"

void main()
{
	student s("Ted","Thompson",22,3.91);
	faculty f("Richard","Karp",45,2,420);
	cout<<endl;
	s.printStudent();
	f.printfaculty();
	cout<<endl;

//output for ex 5
//person(str,str,int) called
//student(str,str,int,float) called
//~student() called
//~person() called
//person(str,str,int) called
//faculty(str,str,int,int,int) called
//~faculty() called
//~person() called

}