# include<iostream>
using namespace std;
    
/*program for demo#1-base class pointer derived class object

*/
class base
{
public:
	void fun1()
	{
		cout<<"fun1 of base"<<endl;
	}
};
class derived:public base
{
public:
	void fun1()
	{
		cout<<"fun2 of derived"<<endl;
	}
};
int main()
{
	derived d;
	base *ptr=&d; // Base class pointer can point to derived object 
    ptr->fun1();
	//ptr->fun2(); // base ptr can't call functions from derived class

    base e;
    //derived *p=&e; //Derived class pointer can't point to base object 
	
	return 0;
}