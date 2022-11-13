// https : //www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
#include<iostream>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int max = a;
    int max2 = 0;

    if (b >= c)
    {
        if (b >= d)
        {
            max2 = b;
        }
    }
    if (c >= b)
    {
        if (c >= d)
        {
            max2 = c;
        }
    }

    if (d >= b)
    {
        if (d >= c)
        {
            max2 = d;
        }
    }

    if (max >= max2)
    {
        return max;
    }

    else
    {
        return max2;
    }
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << max_of_four(a, b, c, d);
    return 0;
}