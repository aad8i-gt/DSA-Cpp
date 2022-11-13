#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int range = 3;
    int i = 1;
    while (range > 0)
    {
        //starts new ROW

        int count = 3;
        while (count > 0)
        {
        //completes each ROW {1 1 1}

            cout << i;
            count--;  
            
        }
        cout << endl;
        i++; 
        range--; 
    }
    
   
    
    return 0; 
}