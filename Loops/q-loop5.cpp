#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int number_of_rows;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> number_of_rows;

    char char_to_print = '*';

    int counter = number_of_rows + 1;
    while (number_of_rows > 0)
    {
        int columns = 0; 

        while (columns < (counter - number_of_rows))
        {

            cout << char_to_print;
            columns++;
        }

        cout << endl;
        number_of_rows--;
    }

    return 0;
}