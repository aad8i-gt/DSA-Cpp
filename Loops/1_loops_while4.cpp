#include<iostream>
#include<cstring>

using namespace std; 

int main()
{
    int i = 1; //ROW;
    int n;  //No of stars in each row
    cin >> n; 

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        { 
            cout << "*";  
            j++;
        }
        cout << endl;  
        i++;  
        
    }
    
    return 0;
} 