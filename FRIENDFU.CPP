//friend function
#include<iostream.h>
#include<conio.h>
class demo1;  //forward declaration
class demo
{
	private:
		int a;
	public:
	       void get_a();
		friend void add(demo s,demo1 s1);
		void show_a();
};
class demo1
{
	private:
		int b;
	public:
		void get_b();
		void show_b();
		friend void add(demo s,demo1 s1);
};

void demo::get_a(){
	cout<<"enter a value of a";
	cin>>a;

}
void demo1::get_b(){
	cout<<"enter a value of b";
	cin>>b;

}

void add(demo s, demo1 s1)
{
	cout<<s.a+s1.b<<endl;
}
void main()
{
	 clrscr();
	 demo d;
	 d.get_a();
	 demo1 d1;
	 d1.get_b();
	 add(d,d1);
	 getch();
}