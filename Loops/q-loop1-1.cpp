#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int number_of_rows;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> number_of_rows;

    int counter = number_of_rows;
    while (number_of_rows > 0)
    {
        int num_to_print = 1;
        while (num_to_print <= counter)
        {
            cout << num_to_print + 2;
            num_to_print--;
        }
        cout << endl;
        number_of_rows--;
               
        
    }
    
    return 0;
}