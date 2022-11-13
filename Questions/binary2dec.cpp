#include <iostream>
#include <cstring>

using namespace std;

int hex2dec(int n)
{

    int ans = 0;
    int x = 1;

    while (n > 0)
    {
        int y = n % 10; //0
        ans = ans + (y * x); //1 
        n = n / 10; //10, 1
        x = x * 2; //x=2, 4
    }

    return ans;
}

int main()
{
    int num;
    cin >> num;

    cout << hex2dec(num);
    return 0;
}