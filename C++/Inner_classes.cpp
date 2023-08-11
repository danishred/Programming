#include <iostream>
using namespace std;

/*program for nested or inner class

*/
class outer
{

public:
    void fun()
    {
        i.display();
    }
// private:
    class inner
    {
    public: 
        void display()
        {
            cout << "display of inner" << endl;
        }
    };

    inner i;
};
int main()
{
    outer::inner i; /*objects of inner class can be created outside 
    as well. We can place inner class private if we do not want this.*/
}