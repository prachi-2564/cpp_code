#include<iostream>
using namespace std;
int main()
{
	int i=0;
	char *ptr[10]={"books","television","computer","sports"};
	char str[25];
	cout<<"enter your favourite leisure pursuit:";
	cin>>str;
	for(i=0;i<4;i++)
	{
		if(!strcmp(str,*ptr[i]))
		{
			cout<<"\n your favourite pursiut is available here"<<endl;
			break;
		}
	}
		if(i==4)
		cout<<"\n your favourite pursiut is not available here"<<endl;
		

}