#include<iostream>
using namespace std;
class Employee
{
    private:
    int employeeID;
    string name;
    float salary;

public:
    void input()
    {
        cout << "Enter Employee ID:";
        cin >> employeeID;
        cout << "Eneter Employee Name:";
        cin >> name;
        cout << "Enter Salary:";
        cin >> salary;
    }
    void output()
    {
        cout << "Employee ID : " <<employeeID<<endl;
        cout << "Name : " <<name<<endl;
        cout << "Salary : " <<salary<<endl;
    }
    };
    int main()
    {
        Employee e;
        e.input();
        e.output();
        return 0;
    }