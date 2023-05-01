#include <iostream>
using namespace std;

/*program for demo#2-base class pointer derived class object

*/
class rectangle
{
public:
    void area()
    {
        cout << "area of rectangle" << endl;
    }
};
class cuboid : public rectangle
{
public:
    void volume()
    {
        cout << "cuboid volume" << endl;
    }
};
int main()
{
    rectangle r;
    // cuboid *q=&r; //Derived class pointer can't point to base object
    
    cuboid c;
    c.area();
    c.volume();
    rectangle *p = &c; // Base class pointer can point to derived object 
    p->area();
    //p->volume(); // base ptr can't call functions from derived class

    return 0;
}