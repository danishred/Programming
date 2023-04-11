#include<iostream>
using namespace std;

class BasicCar
{
    public:
	void start()
	{
		cout<<"Car Started"<<endl;
	}
	
};
    
class AdvanceCar:public BasicCar
{
    public:
	void playmusic()
	{
		cout<<"Playing Music"<<endl;
	}
	
};
    
int main()
{
	BasicCar b;
	//AdvanceCar *q=&b;//Derived class pointer can't point to base object
	AdvanceCar a;
	a.start();
	a.playmusic();
	BasicCar *ptr=&a;
	ptr->start();
	//ptr->playmusic(); // base ptr can't call functions from derived class
	    
}
    