#include <bits/stdc++.h>
using namespace std;

void reverseString(char a[], int size, int s, int e)
{
    //base
    if (size == 0 || s > e)
        return;

    swap(a[s], a[e]);
    reverseString(a, size, ++s, --e);

    /*
    char temp = a[s];
    a[s] = a[e];
    a[e] = temp;
    
    reverseString(a, size, ++s, --e); */
}

int main()
{
    char a[6] = "abcde";
    cout << "original/ " << a << endl;
    reverseString(a, 6, 0, 4);
    cout << "reverse/ " << a << endl;
    return 0;
}