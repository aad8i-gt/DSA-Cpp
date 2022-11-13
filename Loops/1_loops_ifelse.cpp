#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char b;
    cout << "ENTER THE VALUE for a: ";
    cin >> b;

    int a;
    a = (int)b;
 

    if (a >= 48 && a <= 57)
    {
        cout << "Numeric" << endl;
    } 
    
    if (a >= 65 && a <= 97 )
    {
        cout << "A IS UPPER CASE!"; 
    }
    
    else if (a >= 98 && a <= 113)
    {
        cout << "A IS LOWER CASE!"; 
    }

    
    /*
    if(a > 0) {
        cout << a << " is positive number" << endl;
    }  

    else if(a == 0) {
        cout << a << " is zero" << endl;
    }  

    else {
        cout << a << " is negative number" << endl;
    } */

    return 0;
}  