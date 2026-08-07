#include<iostream>
using namespace std;
class Student
{
    private:
    int studentID;
    string name;
    string division;

public:
    void input()
    {
        cout << "Enter Student ID:";
        cin >> studentID;
        cout << "Eneter Student Name:";
        cin >> name;
        cout << "Enter Division:";
        cin >> division;
    }
    void output()
    {
        cout << "Student ID : " <<studentID<<endl;
        cout << "Name : " <<name<<endl;
        cout << "Division : " <<division<<endl;
    }
    };
    int main()
    {
        Student s;
        s.input();
        s.output();
        return 0;
    }