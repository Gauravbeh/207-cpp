//Greater of three Number
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	cout<<"Enter the value of c:";
	cin>>c;

	if((a>b)&&(a>c))
	{
	cout<<"A is big";
	}
	else if((b>a)&&(b>c))
	{
	cout<<"B is big";
	}
	else if((c>a)&&(c>b))
	{
	cout<<"C is big";
	}
	else
	{
	cout<<"Two are same";
	}
	getch();
}
