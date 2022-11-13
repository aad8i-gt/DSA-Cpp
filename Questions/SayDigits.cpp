#include <iostream>
#include <cstring>

using namespace std;

void numberOfWays(int n)
{
    if (n == 0)
        return;

    string array[10] = {"Zero",
                        "One",
                        "Two",
                        "three",
                        "four",
                        "five",
                        "six",
                        "seven",
                        "eight",
                        "nine"};

    int digit = n % 10;
    n = n / 10;
    numberOfWays(n);
    cout << array[digit] << " ";
};

int main()
{

    numberOfWays(12412);
    return 0;
}