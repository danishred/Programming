#include<iostream>
using namespace std;
enum shape
{
circle, rectangle,
triangle,

};
main()
{
cout << "Enter shape code:";
int code;
cin >> code;
switch(code)
{
case circle:
cout<<"Circle";
break;
case rectangle:
cout<<"Rectangle";
break;
case triangle:
cout<<"Triangle";
break;
}
cout<<"Enter shape code[1-2]:";
cin >> code;
cout << "Thank You.\n";
return 0;
}

