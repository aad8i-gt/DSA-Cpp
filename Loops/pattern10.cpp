#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for(int j=n-i; j>0; j--) {
            cout << " ";
        }

        for(int j=1; j<=n; j++) {
            cout << "*"; 
        } 
  
        cout << endl;
    }

    /*for(int i=1; i<=n; i++) {
        for(int j=n-1; j>=i; j--) {
            cout << " ";
        } 

        for(int j=1; j<=n; j++) {
            cout << "*";
        } 
        
        cout << endl; 
        }
*/
    return 0;
}