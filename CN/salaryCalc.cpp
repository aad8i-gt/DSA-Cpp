#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int basic;
    char grade;

    cin >> basic >> grade;

    if (basic >= 0 && basic <= 7500000 && grade >= 'A' && grade <= 'Z')
    {
        float hra = 0.2 * basic;
        float da = 0.5 * basic;
        float pf = 0.11 * basic;
        float allow = 0;

        if (grade == 'A')
        {
            allow = 1700;
        }
        else if (grade == 'B')
        {
            allow = 1500;
        }
        else
        {
            allow = 1300;
        }

        float totalSalary = (basic + hra + da + allow) - pf;

        cout << round(totalSalary);
    }
    return 0;
}