
#include<iostream>
using namespace std;

int main()
    {
        int netsalary,basicsalary,percentage_of_allowance,percentage_of_deduction;
        cout<<"\nPlease enter basic salary\n";
        cin>>basicsalary;
        cout<<"\nPlease enter percentage of allowance\n";
        cin>>percentage_of_allowance;
        cout<<"\nPlease enter percentage of deduction\n";
        cin>>percentage_of_deduction;
        cout<<"Net Salary is: ";
        netsalary=basicsalary+basicsalary*percentage_of_allowance/100-basicsalary*percentage_of_deduction/100;
        cout<<netsalary;
    return 0;
    }


