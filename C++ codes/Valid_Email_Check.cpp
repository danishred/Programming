#include <iostream>
using namespace std;

int main()

{
	string email = "john_12.@gmail.com";

	int i = (int)email.find('@');

	string username = email.substr(0, i);  // first and last index in (here separated by comma)

	for (int j = 0; username[j] != '\0'; j++)
	{

		if (username[j] >= 65 && username[j] < 97  ||  //Capital Letters  
			username[j] >= 97 && username[j] <= 122||  //Small Letters  
			username[j] >= 48 && username[j] <= 57 ||  // 0-9
		 	username[j] == 46 || username[j] == 45)	   //Period and Hyphen

			cout<<username[j];

		else
			{
				cout<<username[j];
				cout<<"\nNot a valid Email ID";
				return 0;
			}
	}

	cout<<"\nValid username";
	
	return 0;
}