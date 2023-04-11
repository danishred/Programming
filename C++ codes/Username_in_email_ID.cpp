#include<iostream>
using namespace std;

int main()

{
	string email="john123@gmail.com";

	int i=(int) email.find('@');

	string username=email.substr(0,i);

	cout<<"Username is "<<username;

	return 0;



}