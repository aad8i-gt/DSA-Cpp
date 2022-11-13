#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    //  while(counter < n) {
    //      cout << counter << " ";
    //      counter++;
    //  }

    int counter = 0;
     while (counter < n)
     {
        sum = sum + counter;
        counter++;
     }
     cout << endl;
     cout << sum << endl;
     
    return 0;
}