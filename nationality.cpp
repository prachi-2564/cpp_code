#include<iostream>
using namespace std;
int main()
{ 
   string s;
   int age;
   cout<<"enter your nationality:";
   cin>>s;
   cout<<"\nenter your age:";
   cin>>age;
   if(s=="indian")
   {
   	if(age>=18)
   	{
   	cout<<"\n you are eligible to vote";	
    }
    else
    {
    	cout<<"\n your age is not appropriate to vote";
	}
   }
   else
   {
   	cout<<"you are not eligible to vote";
   }
   
   
}
