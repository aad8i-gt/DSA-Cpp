#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int a = 10;
    int b = 500;

    /*
    
    Working: 
    Here, Expression1 is the condition to be evaluated. 
    If the condition(Expression1) is True then Expression2 will be 
    executed and the result will be returned. 
    Otherwise, if the condition(Expression1) is false 
    then Expression3 will be executed and the result will be returned.

    */
    int c = (a > b) ? a : b; 
    cout << c; 

} 
 