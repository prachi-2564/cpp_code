#include<iostream>
using namespace std;
int m=10;
int main()

{

int m;
{
 int k=m;
 int m=30;
 cout<<"we are in inner block\n";
 cout<< "k="<<k<<endl;
 cout<< "m="<<m<<endl;
 cout<<"::m ="<<::m<<"\n";	
}
 cout<<"\nwe are in outer block\n";
 cout<< "m="<<m<<endl;
 cout<<"::m ="<<::m<<"\n";
 return 0;
}