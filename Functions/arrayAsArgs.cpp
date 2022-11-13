#include <iostream>
#include <cstring>

using namespace std;

void displayMarks(int m[])
{
    int roll[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << roll[i] << " - " << m[i] << endl;
    }
}

//No need to specify row, 
//column is compulsory to specify.
void Display(int a[][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "a"
                 << "[" << i << "]"
                 << "[" << j << "]"
                 << " = " << a[i][j] << endl;
        }
    } 
}

int main()
{
    int marks[5] = {88, 99, 75, 96, 95};

    int roll_Marks[2][3] = {{1, 5, 3},
                            {7, 6, 9}};
    displayMarks(marks);
    Display(roll_Marks);

    return 0;
}