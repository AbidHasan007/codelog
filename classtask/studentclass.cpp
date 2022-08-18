/*
Crete a class Student
---------------------
#function:
setvalue
display
calculate gpa
---------------------
#Author
Masum
Created: 16-8-2022

*/

#include<iostream>
using namespace std;
class Student{
private:
 string Name;
 int Roll;
 string dept;
 int sub1,sub2,sub3,sub4,sub5;
 int totalmarks=500, obtainedmarks;
 float per=0.0,grade;
 string session;
 float avg;
 public:
  void setValue();
  void display();
  float gpa();

};
void Student::setValue(){
  cout<<"Enter your name \n";
        getline(cin,Name);
  cout<<"Enter your roll \n";
         cin>>Roll;
  cout<<"Enter your obtained marks for 5 sub  \n";
        cin>>sub1>>sub2>>sub3>>sub4>>sub5;
  cout<<"Enter your dept \n";
        getline(cin>>ws,dept);
  cout<<"Enter your session \n";
        getline(cin,session);

}
void Student::display(){
   int res;
   res=gpa();
   cout<<"Name: "<<Name<<"\nRoll: "<<Roll<<"\nDepartment: "<<dept<<"\nres: "<<res;

}
float Student::gpa(){
   obtainedmarks=sub1+sub2+sub3+sub4+sub5;
   if(obtainedmarks<=totalmarks){
        per= 100*float(obtainedmarks)/float(totalmarks);
   }
   else
   {
     cout<<"Marks incorrect\n";
   }
   if(per>0)
   {
      if((per>=80)&&(per<=100))
      {
        grade=5.0;
      }
      else if((per>=70)&&(per<=79.99))
      {
       grade=4.0;
      }
      else if((per>=60)&&(per<=69.99))
      {
        grade=3.0;
      }
      else if((per>=33)&&(per<=59.99))
      {
       grade=2.0;
      }
   }
   return grade;

}
int main()
{
 Student s1;
 s1.setValue();
 s1.display();
return 0;
}
