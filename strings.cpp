#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    /* 
    //WAYS OF DECLARING A STRING
    char str[4] = "C++";

    char str[] = {'C', '+', '+', '\0'};

    char str[4] = {'C', '+', '+', '\0'};
    */

    /*char str[100];
    cout << "Enter string1: ";
    cin >> str;
    cout << str << endl;

    cout << "Enter string2: ";
    cin >> str;
    cout << str << endl; 
    
    // To get the whole line:
        //cin.get(string, 100);

*/
    string s;
    cin >> s; 
    // getline(cin, s);  
    cout << s << endl;

    return 0;
}