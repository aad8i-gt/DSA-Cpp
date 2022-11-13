#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int number_of_rows;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> number_of_rows;

    int num_to_print = 1;

    while (number_of_rows > 0)
    {
        int column = 1; 
        while(column <= number_of_rows)  
        {
           cout << num_to_print;
           num_to_print++,
           column++;
        } 
        cout << endl;
        number_of_rows--; 
        
    }
     
    return 0;
}