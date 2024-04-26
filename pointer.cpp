#include<iostream>
using namespace std;
int main()
{
	int a;
	int *ptr1,**ptr3;
	cout<<"enter the value of a:";
	cin>>a;
	ptr1=&a;
	cout<<"adress of a:"<<ptr1<<endl;
	cout<<"value of a:"<<*ptr1<<endl;
//	ptr2=&ptr1;
//	cout<<"adress of ptr1:"<<ptr2;
//	cout<<"value of ptr:"<<*ptr2;
	ptr3=&ptr1;
//	cout<<"new adress:"<<ptr3<<endl;
	ptr1++;
    cout<<"value of ptr1:"<<*ptr3<<endl;
	cout<<" new adress of a:"<<ptr1<<endl;
	ptr3++;
	cout<<" new adress of ptr1:"<<ptr3<<endl;
	
}