#include<iostream>
using namespace std;
    
int main()
{
	string str="WeLcOMe";
	    
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=96) //Upper case letter range
		{
		    str[i]=str[i]+32;
		}
	}
	cout<<str<<endl;
	    
	return 0;
	    
}