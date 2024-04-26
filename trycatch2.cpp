#include<iostream>
using namespace std;
void divide(double x,double y)
{
	cout<<"\n WE ARE INSIDE THE FUNCTION \n";
	try
	{
		if(y==0.0)
		throw y;
		else
		cout<<"divison ="<<x/y<<endl;
	}
	catch(double)
	{
		cout<<"caught double inside function"<<endl;
		throw;
	}
	cout<<"end of function";
}
int main()
{
	cout<<"inside main"<<endl;
	try
	{
		divide(10.5,2.0);
		divide(20.0,0.0);
	}
	catch(double)
	{
		cout<<"caught double inside main \n";
	}
	cout<<"end of main";
	return 0;
	
}