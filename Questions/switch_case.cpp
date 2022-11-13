#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    /*
    //HELLO, WORLD
    char button;
    cout << "Input a character: ";
    cin >> button;

    switch (button)
    {
    case 'a':   
        cout << "HELLO" << endl;
        break;
    case 'b':   
        cout << "HOLA" << endl;
        break;
    case 'c':   
        cout << "CIAO" << endl;
        break;
    case 'd':   
        cout << "YO!" << endl;
        break;
    
    default:
        cout << "I am still learning more" << endl;
        break;
    }*/

    /*
    //CALCULATOR SIMPLE
    float num1;
    float num2;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    char operation;
    cout << "Enter operation to perform: ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 / num2 << endl;
        break;
    
    default:
        cout << "WRONG INPUT!";
        break;
    }*/
     
     char input;
     cout << "Enter a char: ";
     cin >> input;

     switch (input)
     {
     case 'a':
         cout << "VOWEL!" << endl;
         break;

     case 'e':
         cout << "VOWEL!" << endl;
         break;

     case 'i':
         cout << "VOWEL!" << endl;
         break; 

     case 'o':
         cout << "VOWEL!" << endl;
         break;

     case 'u':
         cout << "VOWEL!" << endl;
         break;
     
     default:
        cout << "CONSONANT!" << endl;
         break;
     }

    return 0;
}