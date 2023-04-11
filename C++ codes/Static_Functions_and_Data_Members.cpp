# include<iostream>
using namespace std;
    
/*program for static function of a class

*/
class test
{
public:
     int a;
     static int count; // Static Data Member
     test()
     {
	   a=10;
           count++;
     }
     static int getcount() // Static Member Function
     {
	   return count;
     }
};
int test::count=0; //Declaration outside of Static Member Function
int main()
{
	test t1,t2;
    cout<<t1.count<<endl;
	cout<<t2.count<<endl;
	t1.count=25;
    cout<<t2.getcount()<<endl; //Access through Object
	cout<<test::getcount()<<endl; //Access through Class
	
}