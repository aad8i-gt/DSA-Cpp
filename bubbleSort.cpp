#include <iostream>
#include <cstring>

using namespace std;

void bubbleSort(int *input, int size)
{
    long limit = -2147483648;
    int largest = 0, secondLargest = limit;
    for (int i = 1; i < n; i++)
    {
        if (input[i] > input[largest])
            largest = i;
    }

    
    for (int i = 0; i < n; i++)
    {
        if (input[i] != input[largest])
        {
            
            if (secondLargest == -1)
                secondLargest = i;
            else if (input[i] > input[secondLargest])
                secondLargest = i;
        }
    }
    return secondLargest;
}
}



/*
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (input[i] > input[j])
            {
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
}

int main()
{

    return 0;
}