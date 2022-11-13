#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;

    
    for(int i=1; i<=n; i++) {
        int a=1;
        for(int j=n-i; j>0; j--) {
            cout << " ";
        }
        for(int j=1; j<=i; j++) {
            cout << a << " ";
            a++; 
        }
        cout << endl; 
    }
    return 0;
}