#include <iostream>

using namespace std;

bool prime(int n)
{

    int d = 2;
    while (d < n)
    {
        if (n % d == 0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int x = 2; x <= n; x++)
    {
        if (prime(x))
        {
            cout << x << " ";
        }
    }
    return 0; 
} 

// #include <iostream>

// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;

    

//     for (int i = 2; i <= N; i++)
//     {
//         bool ans = false;

//         if (i == 2)
//         {
//             ans = false;
//         }

//         for (int d = 2; d < i; d++)
//         {
//             if (i % d == 0)
//             {
//                 ans = true;
//                 break;
//             }
//         } 

//         if (ans == false)
//         { 
//             cout << i << " ";
//         }
//     }
//     return 0;
// } 