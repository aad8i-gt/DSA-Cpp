#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int number_of_rows;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> number_of_rows;
    int counter = 1;
    
    while (counter <= number_of_rows)
    {
        int num_to_print = 1;
        while (num_to_print <= number_of_rows)
        {
            cout << num_to_print;
            num_to_print++;
            
        } 
        cout << endl;
        counter++;
         
    }
    
    return 0;
}

/*OUTPUT
3
123
123
123
*/