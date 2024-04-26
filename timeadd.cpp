#include<iostream>
using namespace std;
class time
{
	int h,m,s;
	public:
	 void instance()
	{
	 cout<<"enter hour,minutes and seconds:";
	 cin>>h>>m>>s;	
	}
	void calc(time t1,time t2)
	{
      s=((t1.s+t2.s)%60);
      m=((t1.s+t2.s)/60)+((t1.m+t2.m)%60);
      h=(t1.h+t2.h)+((t1.m+t2.m)/60);
      cout<<"hours:"<<h<<" minutes:"<<m<<" seconds:"<<s;
	}
};
int main()
{
	time t1,t2,t3;
	t1.instance();
	t2.instance();
	t3.calc(t1,t2);
}