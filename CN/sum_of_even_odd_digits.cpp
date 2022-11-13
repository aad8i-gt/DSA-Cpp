#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int lastDigit = 0;
    int evenSum = 0;
    int oddSum = 0;

    long constraint = pow(10, 8);

    if (N >= 0 && N <= constraint)

        while (N > 0)
        {
            lastDigit = N % 10;
            N /= 10;

            if (lastDigit % 2 == 0)
            {
                evenSum = evenSum + lastDigit;
            }

            else
            {
                oddSum = oddSum + lastDigit;
            }
        }

    cout << evenSum << " " << oddSum;
    return 0;
}