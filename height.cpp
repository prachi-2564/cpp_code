#include<iostream>
using namespace std;
class height
{
	int f,i;
    public:
	void instance()
	{
	 cout<<"enter foots and inches:";
	 cin>>f>>i;	
	}
	inline void calc(height h1,height h2)
	{
      i=((h1.i+h2.i)%12);
      f=(h1.f+h2.f)+((h1.i+h2.i)/12);
      cout<<"foot: "<<f<<" inches: "<<i;
	}
};
int main()
{
    height h1,h2,h3;
	h1.instance();
	h2.instance();
	h3.calc(h1,h2);
}