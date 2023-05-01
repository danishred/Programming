#include<iostream>
using namespace std;
    
void fun()
{
	static int s=10; //varible remains in the memory even after termination of function
	s++;
	    
	cout<<s<<endl;
}
    
int main()
{
	fun();
	fun();
	    
}