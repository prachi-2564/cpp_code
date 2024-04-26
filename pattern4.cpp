#include<iostream>
using namespace std;
int main()
{
int i,j,k;
for(i=5;i>=0;i--)
{
	for(j=i;j>=0;j--)
	{
	   if(j==0 || i==0 || i==5 || j==i)
	   {
	   
		cout<<j<<" ";
	   }
	   else
	   {
	   	cout<<"  ";
	   }
	}
	cout<<endl;
}
}
