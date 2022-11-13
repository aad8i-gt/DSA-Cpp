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
        int counter = 3; 
        while (counter > 0)
        {
            cout << num_to_print;
            counter--;                  //counter = counter - 1
        }
        num_to_print++;
        cout << endl; 
        number_of_rows--; 
        
    }
    

    return 0;
}