#include<iostream>
using namespace std;
int main()
{
	int a[50],i,n,j,min,temp;
	cout<<"enter number of elements you want to apply selection sort to:";
	cin>>n;
	cout<<"enter numbers:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<=a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}