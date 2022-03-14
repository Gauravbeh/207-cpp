#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter a and b";
	cin>>a>>b;

	int temp=a;
	a=b;
	b=temp;
	cout<<"\n a is"<<a;
	cout<<"\nb is"<<b;
	getch();
}