#include<iostream>
#include<string.h>

using namespace std;

class A{
	public :
		void show()
		{
		
			cout<<"METHOD FROM CLASS A"<<endl;
		}
};

class B{
	public :
		void show()
		{
			cout<<"METHOD FROM CLASS B"<<endl;
		}
	
};

class C:public A,public B
{
	public :
		void put()
		{
			cout<<"METHOD FROM CLASS C"<<endl;
		}
		
};

int main()
{
	C obj;
	obj.A::show();
	obj.B::show();
	obj.put();
	return 0;
}
