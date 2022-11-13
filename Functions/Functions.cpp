#include <iostream>
#include <cstring>

using namespace std;


//CALL BY VALUE
int sum(int x, int y) //Formal Parameters
{
    return x + y;
}

//any code after is not executed.

int main()
{
    int a, b; //Actual Parameters
    cin >> a >> b;

    cout << sum(a, b);
    return 0;
}