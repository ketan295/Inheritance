#include<iostream>
using namespace std ;

class Mother
{
	public :
	void get()
	{
		cout<<"Mother name =aarti"<<endl;
		cout<<"Age =30"<<endl;
	}
};

class daughter : public Mother
{
	public :
	void show()
	{
		cout<<"Mother name =divya"<<endl;
		cout<<"Age =5"<<endl;
	}	
};
int main()
{
	daughter d1;
	d1.get();
	d1.show();
	return 0;
}

