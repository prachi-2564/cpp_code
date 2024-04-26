//single inheritance
#include<iostream>
using namespace std;
class room
{
   int l,b,h;
   public:
   	room()
   	{
   		cout<<"enter l, b, h";
   		cin>>l>>b>>h;
	   }

 int getl()
 {
 	return l;
 }


 int getb()
 {
 	return b;
 }

 int geth()
 {
 	return h;
 }
};
class volume:public room
{
  int l=getl();
  int b=getb();
  int h=geth();
  public:
  	void getvalue()
  	{
  			cout<<"\nl: "<<l;
	  }
  void getvolume()
  {
  
  	cout<<"\nVOLUME OF ROOM:"<<(l*b*h);
  }
  	
};
int main()
{
	volume v;

	v.getvalue();
	v.getvolume();

	
}