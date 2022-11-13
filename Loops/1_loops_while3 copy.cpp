#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    double fahr;
    double celcius;

    cin >> fahr;

    celcius = 5.0/9.0 * (fahr - 32.0);
    cout << celcius;     
    return 0; 
} 