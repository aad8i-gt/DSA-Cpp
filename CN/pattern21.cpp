#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int N;
    cin>>N;

    int i=1;
    while(i<=N)
    {
        int j=1;
        char ch='A';
        while(j<=N-i+1)
        {
            cout << ch;
            ch++;
            j++; 
        }
        cout << endl;
        i++;
    }
    return 0;
}