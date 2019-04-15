#include"person.h"
#pragma once
class faculty:private person
{
private:
   int course_count;
   int telephone_ex_no;
public:
  faculty(string fname,string lname,int age,int count_course,int tel_no);
  ~faculty();
  int getcourse_c();
  void setcourse_c(int cc);
  int gettel_no();
  void settel_no(int tel_no);
  void printfaculty();
};