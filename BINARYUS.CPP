//program to demonstrate binary operator overloading using friend function
#include<iostream.h>
#include<conio.h>
class binary
{
	private:
		int a,b;

	public:
		void get();
		void show();
		fbinary friend operator +(fbinary f4,fbinary f5);
};
void get();
{
	cout<<"Enter value of a :";
	cin>>a;
	cout<<"Enter value of b :";
	cin>>b;


};
fbinary operator +(fbinary f4,fbinary f5)
{
	fbinary f6;
	f6.a=f4.a+f5.a;
	f6.b=f4.b+f5.b;
	return(f6);
}
void fbinary::show()
{
	cout<<"Addition of two objects is"<<endl;
	cout<<"value of a is"<<a<<endl;
	cout<<"value of b is"<<b<<endl;
 }
 main()
 {
	clrscr();
	fbinary f1,f2,f3;
	f1

 }
}