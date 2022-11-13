#include <iostream>
#include <cstring>

using namespace std;
void sort012(int *arr, int n)
{
    //Write your code here
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            countZero++;
        if (arr[i] == 1)
            countOne++;
        if (arr[i] == 2)
            countTwo++;
    }

    for (int i = 0; i < countZero; i++)
    {
        arr[count]=0;
        count++;
    }
    for (int i = 0; i < countOne; i++)
    {
        arr[count]=1;
        count++;
    }
    for (int i = 0; i < countTwo; i++)
    {
        arr[count]=2;
        count++;
    }
}
int main()
{

    return 0;
}