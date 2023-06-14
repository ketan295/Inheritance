#include<iostream>
#include<string.h>

using namespace std;

class A{
	public :
		void get()
		{
		
			cout<<"METHOD FROM CLASS A"<<endl;
		}
};

class B : public A
{
	public :
		void getdata()
		{
			cout<<"METHOD FROM CLASS B"<<endl;
		}
	
};

class C : public A
{
	public :
		void show()
		{
			cout<<"METHOD FROM CLASS C"<<endl;
		}
		
};

class D : public B, public C
{
	public :
		void put()
		{
		
			cout<<"METHOD FROM CLASS D"<<endl;
		}
};

int main()
{
	D d1;
	d1.B::get();
	d1.getdata();
	d1.show();
	d1.put();
	return 0;
}
