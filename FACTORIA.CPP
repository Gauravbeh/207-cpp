//factorial Porgram
#include<iostream.h>
#include<conio.h>
void main()
{
	int no,i;
	double long fact=1;
	clrscr();
	cout<<"Enter the number:";
	cin>>no;
	for(i=1;i<=no;i++)
	{
	 fact=fact*i;
	 }
	 cout<<"fact="<<fact;
	 getch();
}