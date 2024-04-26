//ERROR HANDLING
#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
	cout<<"\n WE ARE INSIDE THE FUNCTION \n";
	if((x-y)!=0)
	{
		int r=z/(x-y);
		cout<<" RESULT:"<<r<<endl;
	}
	else
	{
		throw(x-y);
	}
}
int main()
{
	try
	{
 	cout<<"\n WE ARE INSIDE THE TRY BLOCK\n";
 	divide(10,20,30);
 	divide(10,10,20);
	}
	catch(int i)
	{
		cout<<" CAUGHT THE EXCEPTION";
	}
	return 0;
}