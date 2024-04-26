#include<iostream>
using namespace std;
int main()
{ 
  int a,b;
  cout<<"enter two numbers:";
  cin>>a>>b;
  int max=(a>b)?a:b;
  while(1)
  {
  	if(max%a==0 && max%b==0)
  	{
  		cout<<"LCM:"<<max;
  		break;
	}
	max++;
  }
  
}
