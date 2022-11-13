#include <iostream>
#include <cstring>

using namespace std;
char highestOccurringChar(char a[])
{
    // Write your code here

    int freq_array[256] = {0};
    int max = 0;
    int index = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        int x = a[i];
        freq_array[x] += 1;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq_array[i] > max)
        {
          max = freq_array[i];  
        }
    }

    char ans = freq_array[index];

    return ans;
}
int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
    return 0;
}