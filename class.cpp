#include<iostream>
using namespace std;
class room
{
	int l,b,h;
	public:
	room()
	{
	 cout<<"enter length:";
	 cin>>l;
	 cout<<"enter breadth:";
	 cin>>b;
	 cout<<"enter height:";
	 cin>>h;	
	}
	void calc()
	{
		cout<<"area:"<<(l*b)<<endl;
		cout<<"volume:"<<(l*b*h);
		
	}
};
int main()
{
 room r;
 r.calc();	
}