#include<iostream>
using namespace std;
int main()
{
 int a[50][50],b[50][50],m[50][50];
 int r,c,i,j,k,r1,c1;
 cout<<"enter number of rows for 1st matrix:";
 cin>>r;
 cout<<"enter number of columns for 1st matrix :";
 cin>>c;
 cout<<"enter array elements of 1st matrix:";
 for(i=0;i<r;i++)
 {
 	for(j=0;j<c;j++)
 	{
 	cin>>a[i][j];	
    }
 }
 cout<<"enter number of rows for 2nd matrix:";
 cin>>r1;
 cout<<"enter number of columns for 2nd matrix :";
 cin>>c1;
 cout<<"enter array elements of 2nd matrix:";
 for(i=0;i<r1;i++)
 {
 	for(j=0;j<c1;j++)
 	{
 	cin>>b[i][j];	
    }
 }
 if(c==r1)
 {
 
 for(i=0;i<r;i++)
 {
 	for(j=0;j<c1;j++)
 	{
 		for(k=0;k<r1;k++)
 		{
 		 m[i][j]+=a[i][k]*b[k][j];
		}
	}
}
for(i=0;i<r;i++)
 {
 	for(j=0;j<c1;j++)
 	{
 	cout<<m[i][j]<<" ";	
    }
    cout<<endl;
 }
}

else
{
	cout<<"Matrix multiplication not possible";
}

 
}