#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			cout<<"  ";
		}
		for(k=0;k!=(2*i)+1;k++)
		{	if(k==0||k==(2*i))
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	
	for(i=5;i>=0;i--)
	{
		for(j=0;j<5-i;j++)
		{
			cout<<"  ";
		}
		for(k=0;k!=(2*i)+1;k++)
		{
			if(k==0||k==(2*i))
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}