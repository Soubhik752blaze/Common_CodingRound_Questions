/*Pattern:- *****
            *****
            *****
            *****
            *****
 */


// No of rows = "n"
// Thus, run a loop for n times(outer loop) and in each row, print "*" n times using a inner loop.
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}