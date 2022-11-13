#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double geometricSum(int n)
{
    if (n == 0)
    {
        return 1;
    }
 double power = pow(0.5, n-1);
    double ans = ((1 - power) / 0.5) + geometricSum(n - 1);
   
    

    return ans;
}
int main()
{
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;
}
