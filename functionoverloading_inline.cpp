#include<iostream>
using namespace std;
inline int area(int a)
{
	return a*a;
}
inline int area(int a,int b)
{
	return a*b;
}
inline double area(double a)
{
	return 3.14*a*a;
}
inline double area(float a,float b)
{
 return 0.5*a*b;	
}
int main()
{
	cout<<"AREA OF SQUARE:"<<area(2)<<endl;
	cout<<"AREA OF RECTANGLE:"<<area(4,3)<<endl;
	cout<<"AREA OF CIRCLE:"<<area(4.5)<<endl;
	cout<<"AREA OF TRIANGLE:"<<area(2.5,6)<<endl;
}