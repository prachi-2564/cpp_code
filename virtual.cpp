//function overriding
#include<iostream>
using namespace std;
class Base
{
public:
	void display()
	{
		cout<<"\n Display Base";
	}
	virtual void show()
	{
		cout<<"\n show base";
	}
		
};
class derived:public Base
{
	public:
		void display()
		{
			cout<<"display derived";
		}
	 void show()
	{
		cout<<"\n show derived";
	}
	
};
int main()
{
	Base b;
	derived d;
	Base *ptr;
	cout<<"\n ptr points to base";
	ptr=&b;
	ptr->display();
	ptr->show();
	cout<<"\n ptr points to derived";
	ptr=&d;
	ptr->display();
	ptr->show();
	
	return 0;
	
	
}