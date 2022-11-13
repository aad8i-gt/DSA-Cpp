#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int number_of_rows;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> number_of_rows;

    while (number_of_rows > 0)
    {
        int counter = 4;
        int num_to_print = 4;
        while (counter > 0)
        {
            cout << num_to_print;
            num_to_print--;
            counter--; 

        } 
        cout << endl;
        number_of_rows--; 
    }
    
    
    return 0;
}