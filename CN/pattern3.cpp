// #include<iostream>

// using namespace std;

// int main()
// {
//     int N=5;
//     int i=1;

//     while (i<=N)
//     {
//         int j=1;
//         while (j<=N)
//         {
//             cout << "*";
//             j++;
//         }
//         i++;
//         cout << endl;
        
//     }
    
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int i = 1;
    while (i <= N)
    {
        int j = 1;
        while (j <= N) 
        {
            cout << N;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}