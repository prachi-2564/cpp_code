#include<iostream>
using namespace std;
int main()
{
	int n;
	int f=1,r; 
	cout<<"Enter number of terms you want to print:";
	cin>>n;
	cout<<"enter the first term and the common ratio:";
	cin>>f>>r;
	for(int i=0;i<n;i++)
	{
		cout<<f<<" ";
		f*=r;
	}
	return 0;
}