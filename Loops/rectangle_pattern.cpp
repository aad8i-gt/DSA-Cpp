#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char star = '*';
    int rows = 4;
    int columns = 5;

    for (int i = 0; i < columns; i++)
    { 
        for (int  i = 0; i < rows; i++)
        {
            cout << star; 
        }
        cout << endl; 
        
    }
    
    return 0;
} 