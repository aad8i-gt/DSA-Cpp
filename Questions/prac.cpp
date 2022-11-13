#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int arr[5]={0, 10, 405, 78, 184};

    int maxNo=arr[0];
    int minNo=arr[1];

    for (int i = 0; i < 5; i++)
    {
        maxNo=max(maxNo, arr[i]);
        minNo=min(minNo, arr[i]);
    }

    cout << "MaxNo: " << maxNo 
    << " " << "MinNo: " << minNo; 
    
    return 0;
} 