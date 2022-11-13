#include <bits/stdc++.h>
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main()
{
    int n, s, t, sc = 0, tc = 0, max = 0, w = 0;
    cin >> n;
    while (n--)
    {
        cin >> s >> t;
        sc += s;
        tc += t;
        int temp = abs(sc - tc);
        if (temp > max)
        {
            max = temp;
            if (sc > tc)
                w = 1;
            else
                w = 2;
        }
    } 
    // 	printf("%d %d",w,max);
    cout << w << ' ' << max << endl;
    return 0;
}