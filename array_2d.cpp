#include<iostream>
using namespace std;
int main()
{
 int a[50][50];
 int m,n,i,j;
 cout<<"enter number of rows:";
 cin>>m;
 cout<<"enter number of columns:";
 cin>>n;
 cout<<"enter array elements:";
 for(i=0;i<m;i++)
 {
 	for(j=0;j<n;j++)
 	{
 	cin>>a[i][j];	
    }
 }
 cout<<"ARRAY:"<<endl;
 for(i=0;i<m;i++)
 {
 	for(j=0;j<n;j++)
 	{
 	cout<<a[i][j]<<" ";	
    }
    cout<<endl;
 }
}