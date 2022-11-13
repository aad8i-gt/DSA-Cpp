#include<iostream>
#include<cstring>

using namespace std;

int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int count=0;
    for(int i=0; i<size-1; i++)
    {
        if(input[i+1]>input[i])
        {
            count++;
        }
    }

    int k = size-count;
    return k;
}

int main()

{
    
    return 0;
}