#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N = 10;

    int i = 0;
    int j = 1;

    cout << i << " "; 
    for (int count = 1; count <= N-1 ; count++)
    {
        cout << j << " "; //0 1 1 2
        
        
        int temp = i;
        i = j;
        j = temp + j; 

        /*int sum=i+j; //1   2 2
        i=j;         //1 1 2
        j=sum;        //1 2 2
        */
    }  

    return 0;
}