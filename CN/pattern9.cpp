#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int i = 1;
    while (i <= N)
    {
        char ch='A';
        // char ch=65;
        int j = 1;
        while (j <= N)
        {
            //char ch = 'A' + j - 1
            cout << ch;
            j++;
            ch++;
        }
        cout << endl;
        i++;
    } 

    return 0;
}