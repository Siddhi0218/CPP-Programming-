#include <iostream>
using namespace std;

class Result
{
    float marks[5];
    float total, percentage;

public:
    void accept()
    {
        cout << "Enter marks of 5 subjects:" << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculate()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        percentage = total / 5;

        cout << "\nTotal Marks = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;

        bool pass = true;

        for (int i = 0; i < 5; i++)
        {
            if (marks[i] < 40)
            {
                pass = false;
                break;
            }
        }

        if (pass)
            cout << "Result = Passed";
        else
            cout << "Result = Failed";
    }
};

int main()
{
    Result r;

    r.accept();
    r.calculate();

    return 0;
}