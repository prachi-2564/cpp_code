#include<iostream>
using namespace std;
int main()
{
	int m,d;
	cout<<"enter birth month ";
	cin>>m;
	cout<<"enter birth date";
	cin>>d;
	if((m==1 && d>=21 && d<=31) || (m==2 && d>=1 && d<=18))
	{
		cout<<"YOUR ZODIAC SIGN IS AQUARIUS";
	}
	else if((m==2 && d>=19 && d<=29)|| (m==3 && d>=1 && d<=20))
	{
		cout<<"YOUR ZODIAC SIGN IS PISCES";
	}
	else if((m==3 && d>=21 && d<=31)|| (m==4 && d>=1 && d<=19))
	{
		cout<<"YOUR ZODIAC SIGN IS ARIES";
	}
	else if((m==4 && d>=20 && d<=30)|| (m==5 && d>=1 && d<=20))
	{
		cout<<"YOUR ZODIAC SIGN IS TAURUS";
	}
	else if((m==5 && d>=21 && d<=31)|| (m==6 && d>=1 && d<=20))
	{
		cout<<"YOUR ZODIAC SIGN IS GEMINI";
	}
	else if((m==6 && d>=21 && d<=30)|| (m==7 && d>=1 && d<=22))
	{
		cout<<"YOUR ZODIAC SIGN IS CANCER";
	}
	else if((m==7 && d>=23  && d<=31)|| (m==8 && d>=1 && d<=22))
	{
		cout<<"YOUR ZODIAC SIGN IS LEO";
	}
	else if((m==8 && d>=23 && d<=31)|| (m==9 && d>=1 && d<=22))
	{
		cout<<"YOUR ZODIAC SIGN IS VIRGO";
	}
	else if((m==9 && d>=23 && d<=31)|| (m==10 && d>=1 && d<=22))
	{
		cout<<"YOUR ZODIAC SIGN IS LIBRA";
	}
	else if((m==10 && d>=23 && d<=31)|| (m==11 && d>=1 && d<=21))
	{
		cout<<"YOUR ZODIAC SIGN IS SCORPION";
	}
	else if((m==11 && d>=22 && d<=31)|| (m==12 && d>=1 && d<=21))
	{
		cout<<"YOUR ZODIAC SIGN IS SAGGITARUS";
	}
	else if((m==12 && d>=22 && d<=31)|| (m==1 && d>=1 && d<=20))
	{
		cout<<"YOUR ZODIAC SIGN IS CAPRICORN";
	}
}
	
	
	
	
	
	