#include <iostream>
#include <cstring>

using namespace std;

//aba
//bab

bool isPermutation(char a[], char b[])
{
    // Write your code here

    int l1 = strlen(a);
    int l2 = strlen(b);

    if (l1 != l2)
    {
        return false;
    }

    int freq1[256] = {0};
    int freq2[256] = {0};
    int c = 0;

    // converts char into ASCII value and
    // uses that value as an index 
    // to create frequency array
    for (int i = 0; a[i] != '\0'; i++)
    {
        int x = a[i];
        freq1[x] += 1;

    }

    for (int i = 0; b[i] != '\0'; i++)
    {
        int x = b[i];
        freq2[x] += 1;

    }

    for(int i =0; i<256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }

    return true;

}

int main()
{
    char a[100];
    char b[100];
    cin >> a >> b;

    isPermutation(a, b);
    return 0;
}

// bool isPermutation(char a[], char b[])
// {
//     // Write your code here
//     bool ans = false;

//     int l1 = strlen(a);
//     int l2 = strlen(b);

//     if(l1 != l2)
//     {
//         return false;
//     }

//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         ans = false;
//         for (int j = 0; b[j] != '\0'; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 ans = true;
//                 break;
//             }
//         }

//         if (ans == false)
//         {
//             return false;
//         }
//     }

//     if (ans == true)
//     {
//         return true;
//     }
// }