#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int ans[100];
    int count = 0;
    while (num != 0)
    {

        int bin_num;
        int rem;
        int qt; 
        rem = num % 2;
        num = num / 2; 

        cout << rem;
        
        for (int i = 0; i <= count; i++)
        {
            ans[i] = rem;
        }


        count++;
        
    } 

for (int i = 0; i <= 4; i++)
{
    cout << "_______________________";
    cout << ans[i];
}

    // for (int i = count+1 ; i >= 0; i--)
    // {
    //     cout << ans[i];
    // }
    

    return 0;
}