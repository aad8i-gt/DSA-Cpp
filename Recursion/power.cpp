#include <iostream>
#include <cstring>

using namespace std;

int power(int n)
{
    if (n == 0)
        return 1;

    int smallerProblem = power(n - 1);
    int bigProb = 2 * smallerProblem;
}


int main()
{
    int n;
    cin >> n;

    int ans = power(n);

    cout << ans << endl;
    return 0;
} 