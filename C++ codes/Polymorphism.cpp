#include<iostream>
using namespace std;
    
//This class is forcing derived class to implement start function.
//There is no use of it on its own
//It is generalising
// https://www.geeksforgeeks.org/polymorphism-in-c/
 
class Car
{
    public:
	virtual void start()
	{
		cout<<"Car Started"<<endl;
	}
	
};
    
class Innova:public Car
{
    public:
	void start()
	{
		cout<<"Innova Started"<<endl;
	}
	
};
    
class Swift:public Car
{
    public:
	void start()
    {
		cout<<"Swift Started"<<endl;
	}
	
};
    
int main()
{
	Car *ptr=new Innova();
	ptr->start();
	ptr=new Swift();
	ptr->start();
	    
}
    