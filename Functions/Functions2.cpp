#include <iostream>
#include <cstring>

using namespace std;

/*CALL BY REFERENCE
1. cannot return local variables
2. cannot returns constants such as 1, -1 etc*/

/*
int sum(int &x, int &y)
{
    x = x + y;
    return x;
}
*/

int& test();

int num;
int main() 
{
    // int a, b;
    // cin >> a >> b;

    // cout << "a: " << a << endl;
    // cout << sum(a, b) << endl;
    // cout << "a: " << a << endl;
    // cout << "b: " << b << endl;

    
    
    
    test() = 100;
    //returns address of
    //num and 100 is assigned
    //to the value

    cout << num;



    return 0; 
}

int& test() 
{
    return num;
}