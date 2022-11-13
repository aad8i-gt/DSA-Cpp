#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int range;
    cout << "Enter range: ";
    cin >> range;

    int sum = 0; 
    
    for (int i = 1; i < range; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i; 
        }
        
    }

    cout << sum;
    
    
    
    return 0;
}