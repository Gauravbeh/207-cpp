#include<iostream.h>
#include<conio.h>
void main()
{
	int rev=0,no,rem;
	clrscr();
	cout<<"Enter the number";
	cin>>no;
	while(no>0)
	{
	rem=no%10;
	rev=rev*10+rem;
	no=no/10;
	}
	cout<<"The reverse is="<<rev;
	getch();
}