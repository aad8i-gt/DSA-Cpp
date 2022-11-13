#include <iostream>
#include <cstring>

using namespace std;

float defaultArgs(int num = 1000, float factor = 50.5)
{
    return num * factor;
}

int main()
{
    int n = 10;

    //Case1: no arguments passed
    cout << defaultArgs() << endl;

    //Case2: 1st arguments passed
    cout << defaultArgs(n) << endl;

    //Case3: All arguments passed
    cout << defaultArgs(n, 2.33) << endl;

    //Case4: 2nd arguments passed
    //This parameter is treated as 1st argument
    //as  the function behaves in an undesired way
    //because the second argument cannot be passed
    //without passing the first argument.

    cout << defaultArgs(10.5) << endl;
    return 0;
}