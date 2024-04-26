#include<iostream>
using namespace std;
int main()
{
	int a[50],n,i;
	cout<<"enter size of array:";
	cin>>n;
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"array:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}		
}