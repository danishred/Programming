#include<iostream>
using namespace std;
    
class Rectangle
{
    private:
	//this will point here to the data member or the object
    int length; 
	int breadth;
	    
    public:
	Rectangle(int length,int breadth)
	{
    	this->length=length;
		this->breadth=breadth;
	}
	    
	int area()
	{
		return length*breadth;
	}
	
};
    
int main()
{
	Rectangle r1(10,5);
	cout<<r1.area()<<endl;
    	
}