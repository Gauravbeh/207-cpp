//The program is` palindrome ok..
#include<iostream.h>
#include<conio.h>
void main()
{
	int no,rev=0,rem,p;
	clrscr();
	cout<<"Enter the number is";
	cin>>no;
	p=no;
	while(no>0)
	{
	rem=no%10;
	rev=(rev*10)+r;
	no=no/10;
	}
	if(rev==p)
	{
	cout<<"The number is palindrome";
	}
	else
	{
	cout<<"The number is not palindrome";
	}
	getch();
