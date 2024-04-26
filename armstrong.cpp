#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,r,count=0,result=0;
	int org;
	cout<<"enter a number:";
	cin>>a;
	org=a;
	while(a!=0)
	{
		  count++;
		  a/=10;
	
    }
	a=org;
      while(a!=0)
    {
    	r=a%10;
    	result+=pow(r,count);
    	a/=10;
     
	}
	if(org==result)
	{
		cout<<org<<" is a armstrong number";
	}
	else
	{
		cout<<org<<" is not a armstrong number";
	}
	
}