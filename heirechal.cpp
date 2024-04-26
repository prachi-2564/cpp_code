#include<iostream>
using namespace std;
class school
{
  string name,address;
  int id;
  public:
  school()
  {
  	cout<<"enter name,address,id:"<<endl;
  	cin>>name>>address>>id;
  }
  string getn()
  {
  	return name;
  }
  string geta()
  {
  	return address;
  }
  int getid()
  {
  	return id;
  }
};
class student : public school
{   
    int marks;
    
	public:
	void getmarks()
	{
		cout<<"enter marks";
		cin>>marks;
	 } 
	void display()
	{
		string name=getn();
		cout<<"name:"<<name<<endl;
		cout<<"address:"<<geta()<<endl;
		cout<<"id:"<<getid()<<endl;
		cout<<"marks: "<<marks<<endl;
		
	}
};
class teacher : public school
{   
    int salary;
   
	public:
	void getsalary()
	{
		cout<<"enter salary:"<<endl;
		cin>>salary;
	}
	void display()
	{
		cout<<"name:"<<getn()<<endl;
		cout<<"address:"<<geta()<<endl;
		cout<<"id:"<<getid()<<endl;
		cout<<"salary: "<<salary<<endl;
		
	}
};
  int main() 
  {
    int marks, salary;
    
    student s; 
    s.getmarks();
    s.display();
   
    teacher t; 
    
    t.getsalary();
    t.display();
    
    return 0;
}