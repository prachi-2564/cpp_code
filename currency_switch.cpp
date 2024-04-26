#include<iostream>
using namespace std;
int main()
{
int ch;
double rs;
double n;
cout<<"Enter indian rupess:";
cin>>rs;
cout<<"enter your choice:\n 1.canadian dollar \n 2.dollar  \n 3.pound \n 4.european euro:";
cin>>ch;
switch(ch)
{
	case 1:
	n=rs*0.016;
	cout<<"\n Indian rupees:"<<rs;
	cout<<"\n Converted into canadian dollar:"<<n;
	break;
	case 2:
	n=rs*0.012;
	cout<<"\n Indian rupees:"<<rs;
	cout<<"\n Converted into us dollar:"<<n;
	break;
	case 3:
	n=rs*0.0095;
	cout<<"\n Indian rupees:"<<rs;
	cout<<"\n Converted into uk pound:"<<n;
	break;
	case 4:
	n=rs*0.011;
	cout<<"\n Indian rupees:"<<rs;
	cout<<"\n Converted into european euro :"<<n;
	break;
	
}
}