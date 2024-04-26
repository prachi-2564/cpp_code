#include<iostream>
using namespace std;
class student
{
	protected:
		int roll;
		public:
			void get_number(int a)
			{
				roll=a;
			}
			void put_number()
			{
				cout<<"roll no:"<<roll<<endl;
			}
};
class test:public student
{
	protected:
		float p1,p2;
		public:
			void get_marks(float x,float y)
			{
				p1=x;
				p2=y;
			}
			void put_marks()
			{
				cout<<"Marks obtained:"<<endl;
				cout<<"Part 1:"<<p1<<endl;
				cout<<"Part 2:"<<p2<<endl;
				
			}
};
class sports
{
	protected :
		float score;
		public:
			void get_score(float s)
			{
				score=s;
			}
			void put_sports()
			{
				cout<<"sports score:"<<score<<endl;
			}
};
class result:public test,public sports
{
	float total;
	public:
		void display()
		{
			total=p1+p2+score;
			put_number();
			put_marks();
			put_sports();
			cout<<"total score:"<<total<<endl;
		}
};
int main()
{
	result r;
	r.get_number(1234);
		r.get_marks(27.5,29.0);
			r.get_score(6.0);
				r.display();
	
}