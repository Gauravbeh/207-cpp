//Single Inheritance
#include<iostream.h>
#include<conio.h>
class student
{
 private:
   int rollno;
   char name[15];
 public:
  void getinfo();	
  void show();
};
class mark:public student
{
 private:
   int m1,m2,m3;
 public:
  void getdata();
  void display();
};

void student::getinfo()
{
cout<<"enter Roll number of student";
cin>>rollno;
cout<<"enter name of student ";
cin>>name;
}
void mark::getdata()
{
cout<<"enter marks of three subject "<<endl;
cout<<"enter marks of first subject";
cin>>m1;
cout<<"enter marks of second subject";
cin>>m2;
cout<<"enter marks of third subject";
cin>>m3;
}
void student::show()
{
cout<<"\n\nRoll number of Student is:- "<<rollno<<endl;
cout<<"Name of Strudent is:- "<<name<<endl;
}
void mark::display()
{
cout<<"Marks of Three subjects are"<<endl;
cout<<"Marks of First subject is:-  "<<m1<<endl;
cout<<"Marks of Second subject is:-  "<<m2<<endl;
cout<<"Marks of Third subject is:-  "<<m3;

}
void main()
{
clrscr();
mark m;
m.getinfo();
m.getdata();
m.show();
m.display();
getch();
}
Output:-
enter Roll number of student1
enter name of student Amol
enter marks of three subject
enter marks of first subject25
enter marks of second subject24
enter marks of third subject27


Roll number of Student is:- 1
Name of Strudent is:- Amol
Marks of Three subjects are
Marks of First subject is:-  25
Marks of Second subject is:-  24
Marks of Third subject is:-  27


