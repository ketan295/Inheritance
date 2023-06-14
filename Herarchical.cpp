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
		void show()
		{
			cout<<"METHOD FROM CLASS B"<<endl;
		}
	
};

class C : public A
{
	public :
		void put()
		{
			cout<<"METHOD FROM CLASS C"<<endl;
		}
		
};

int main()
{
	B B1;
	C c1;
	B1.get();
	B1.show();
	c1.get();
	c1.put();
	return 0;
}
