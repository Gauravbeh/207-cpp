//Defaul Constructor
#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int count;

	public:
	demo();//Constructon Declaration
	void print();

};
demo::demo()
{
	cout<<"Constructon Called"<<endl;
	count=0;
}
void demo::print()
{
	cout<<count<<endl;
}

void main()
{
	clrscr();
	demo d;
	d.print();
	demo d1;
	d.print();

	getch();

}


