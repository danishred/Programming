# include<iostream>
using namespace std;
    
/*program for demo pointers

*/
int main()
{
	int a=10;
	int *p=&a;
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
	cout<<&p<<endl; //pointer too will have its own address which stores address of another variable
	cout<<*p<<endl;
	return 0;
}