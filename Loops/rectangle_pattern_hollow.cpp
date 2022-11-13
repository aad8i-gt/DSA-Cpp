#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int rows;
    int column;

    cout << "Enter number of rows: ";
    cin >> rows; 
    cout << "Enter number of columns: ";
    cin >> column; 

    for (int i = 1; i <= column; i++)
    {       
        for (int j = 1; j <= rows; j++)
        {
            if (j == 1 || j == 4 || i == 1 || i == 5) {
 
                cout << "*";  
  
            }  

            else {
                    cout << " ";
            }
        }        
        cout << endl; 
    }  
    return 0;
} 