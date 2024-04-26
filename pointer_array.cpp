#include<iostream>
using namespace std;
int main()
{
	int number[50],*ptr;
	int n;
	cout<<"enter the count:";
	cin>>n;
	cout<<"enter the numbers:";
	for(int i=0;i<n;i++)
	{
		cin>>number[i];
	}
	ptr=number;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+ *ptr;
		ptr++;
	}
	cout<<"sum:"<<sum;
}