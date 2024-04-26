#include<iostream>
using namespace std;
int main()
{
	string s1("abcd");
	string s2("xyz");
	string s3=s1+s2;
	if(s1!=s2)
	cout<<" both the strings are not equal"<<endl;
    else if(s1>s2)
	cout<<"s1 is greater than s2"<<endl;
	else if( s1==s2)
	cout<<"both are equal"<<endl;
	else
	cout<<"s2 is greater than s1"<<endl;
	if(s3== s1+s2)
	cout<<"s3 is equal to s1=S2"<<endl;
	int x=s1.compare(s2);
	if(x==0)
	cout<<"s1==s2"<<endl;
	else if(x>0)
	cout<<"s1>s2"<<endl;
	else
	cout<<"s2>s1";
	return 0;
	
	
}