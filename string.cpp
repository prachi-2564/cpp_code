#include<iostream>
using namespace std;
int main()
{
	string s1;
	string s2("new");
	string s3("delhi");
	s1=s2;
	cout<<"s1:"<<s1<<endl;
	s1="standard c++";
	cout<<"now s1= "<<s1<<endl;
	string s4(s1);
	cout<<"s4:"<<s4<<endl;
	s1=s2+s3;
	cout<<"finally s1:"<<s1<<endl;
	s2.append(s4);
	cout<<"new s2:"<<s2<<endl;
	s1.insert(3,"abc");
	cout<<"new s1:"<<s1<<endl;
	s4.erase(2,3);
	cout<<"new s4:"<<s4<<endl;
	s3.replace(1,2,s1);
	cout<<"new s3:"<<s3<<endl;
	return 0;
}