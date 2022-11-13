#include <iostream>
#include <cstring>

using namespace std;

void rotate(int *input, int d, int n)
{
    //Write your code here
    int temp[n];
    for (int i = 0; i < d; i++)
    {
        temp[i] = input[i];
    }
    int count = 0;
    for (int j = d; j < n; j++)
    {
        input[j] = input[count];
        count++;
    }
    int i=0;
    for(int j=count; j<n;j++)
    {
        input[count]=temp[i];
        i++;
    }
}
int main()
{

    return 0;
}