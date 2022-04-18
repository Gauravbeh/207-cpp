//Program to demonstrate unary operator overloading using friend function.
#include<iostream.h>
#include<conio.h>
class unary
{
	private:
		int a,b,c;
	public:
		void get();
		unary friend operator -(unary &x);
		void show();

};
void unary::get()
{
	cout<<"Enter Value of a :";
	cin>>a;
	cout<<"Enter value of b :";
	cin>>b;
	cout<<"Enter value of c :";
	cin>>c;
	cout<<"***************************\n";

};
unary operator -(unary &x)
{
	x.a=-x.a;
	x.b=-x.b;
	x.c=-x.c;

}
void unary::show()
{
	cout<<"value of a is = "<<a<<endl;
	cout<<"value of b is = "<<b<<endl;
	cout<<"value of c is = "<<c<<endl;
}
main()
{
	clrscr();
		unary u;
			u.get();
			-u;
			u.show();
			getch();

}



