#include <iostream>

using namespace std;

int main()
{ 
    int n; 
    cin >> n;
    int i;

    int flag = 0;
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "NOT PRIME NUMBER!" << endl;
            flag = 1;
            break;
        }   
    }
  
    if (flag == 0)
    {
        cout << "PRIME NUMBER!" << endl;
    }

    return 0; 
} 