#include<iostream>
#include<fstream>
using namespace std;
     
int main()
{
	ofstream ofs("My.Text",ios::trunc);
	ofs<<"john"<<endl;
	ofs<<25<<endl;
	ofs<<"cs"<<endl;
	ofs.close(); // File will be saved in the folder codes are saved
	    
}
    