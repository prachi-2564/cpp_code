#include<iostream>
using namespace std;
class room
{ 
 int l,b,h;
 public:
 room(int l,int b,int h)
 {
 	this->l=l;
 	this->b=b;
 	this->h=h;	
 }
 int calc()
     {
 	   return l*b*h;
	 }	
};
int main()
{
	int a,b,c;
	cout<<"enter length,breadth and height:";
	cin>>a>>b>>c;
	room r(a,b,c);
	cout<<"Volume of room:"<<r.calc()<<endl;
	room r1(r);
    cout<<r1.calc();
}