//runtime polymorphism
#include<iostream>
#include<string.h>
using namespace std;
class media
{
	protected:
		char title[50];
		float price;
		public:
			media(char *s,float a)
			{
				strcpy(title,s);
				price=a;
			}
			virtual void display()    
			{}	
};
class book:public media
{
	int pages;
	public:
		book(char *s,float a,int p):media(s,a)
		{
			pages=p;
		}
		void display()
		{
		cout<<"title: "<<title;
		cout<<"\n price:"<<pages;
		cout<<"\n price:"<<price;	
		}
};
class tape:public media
{
	float time;
	public:
		tape(char *s,float a,float t):media(s,a)
		{
		   time=t;
		}
		void display()
		{
		cout<<"title: "<<title;
		cout<<"\n play time:"<<time<<"mins";
		cout<<"\n price"<<price	;
		}
};
int main()
{
	char*title=new char[30];
	float price,time;
	int pages;
	cout<<"enter book details:";
	cout<<"title: ";
	cin>>title;
	cout<<"\n pages:";
	cin>>pages;
	cout<<"\n price";
	cin>>price;
	book b1(title,price,pages);
	
	cout<<"enter tape details:";
	cout<<"title: ";
	cin>>title;
	cout<<"\n play time:";
	cin>>time;
	cout<<"\n price";
	cin>>price;
		tape t1(title,price,time);
		media* list[2];
		list[0]=&b1;
		list[1]=&t1;
		cout<<"media details:";
		cout<<"\n book:";
		list[0]->display();
		cout<<"\n tape:";
		list[1]->display();
		return 0;
		
		
		
	
}