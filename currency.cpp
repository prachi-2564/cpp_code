#include<iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
double topound(int n)
{
	cout<<"pound: "<<(0.0095*n);
  return  0.0095*n;	
}
double tousddollar(double n)
{
  return  0.012*n;	
}
double tocanadiandollar(double n)
{
	return  0.016*n;
}
double toeuro(double n)
{
	return  0.011*n;
}
double tonepalian(double n)
{
	return  1.60*n;
}
double toafghani(double n)
{
	return  0.89*n;
}
double topeso(double n)
{
	return  0.21*n;
}
double toyuan(double n)
{
	return  0.088*n;
}
double todhiram(double n)
{
	return  0.044*n;
}
double todinar(double n)
{
	return  1.62*n;
}
void waiting(unsigned int mseconds)
	{
		clock_t goal = mseconds + clock();
		while (goal > clock());
	}


int main()
{
	system("title Currency Converter @copyassignment");
    system("color 5F");
    string currency;
    int choice;
    while(true)
	{
    system("cls");
    cout << "\t\t\t<================================================================================>" << endl;
    cout << "\t\t\t|                        WELCOME TO CURRENCY CONVERTER                           |" << endl;
    cout << "\t\t\t|            Please NOTE that the currency value fluctuates frequently           |" << endl;
    cout << "\t\t\t|      So if you find the conversion to be inaccurate, that might be the cause   |" << endl;
    cout << "\t\t\t<================================================================================>" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

 double n;
 int choice;
 cout<<"enter indian rupees:";
 cin>>n;
 cout<<"Enter your choice: \n1.Pound \n2.US dollar \n3.Canadian dollar \n4.Euro \n5.nepalian \n6.afghani \n7.peso \n8.yuan \n9.dhiram \n10.dinar" <<endl;
 cin>>choice;
 switch(choice)
 {
 	case 1:
 	cout<<"value of "<<n<<" in Pounds:"<<topound(n);
 	      waiting(4000);

 	break;
 	case 2:
 	cout<<"value of "<<n<<" in US dollar:"<<tousddollar(n);
 	waiting(4000);
 	break;
 	case 3:
 	cout<<"value of "<<n<<" in Canadian dollar:"<<tocanadiandollar(n);
 	waiting(4000);
 	break;
 	case 4:
 	cout<<"value of "<<n<<" in Euro:"<<toeuro(n);
 	waiting(4000);
 	break;
 	case 5:
 	cout<<"value of "<<n<<" in Nepalian rupees:"<<tonepalian(n);
 	waiting(4000);
 	break;
 	case 6:
 	cout<<"value of "<<n<<" in Aghani currency:"<<toafghani(n);
 	waiting(4000);
 	break;
 	case 7:
 	cout<<"value of "<<n<<" in Peso:"<<topeso(n);
 	waiting(4000);
 	break;
 	case 8:
 	cout<<"value of "<<n<<" in yuan:"<<toyuan(n);
 	waiting(4000);
 	break;
 	case 9:
 	cout<<"value of "<<n<<" in Dhiram:"<<todhiram(n);
 	waiting(4000);
 	break;
 	case 10:
 	cout<<"value of "<<n<<" in Dinar:"<<todinar(n);
 	waiting(4000);
 	break;
 }
}
}