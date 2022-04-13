//Program to demonstrates Destructors
#include<iostream.h>
#include<conio.h>
class Demo
{
	public:
		~Demo();
};
Demo::~Demo()
{
	cout<<"Destructor called";


};
void main()
{
	clrscr();

	Demo d;

	getch();

}