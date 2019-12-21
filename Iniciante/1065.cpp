#include <bits/stdc++.h>

using namespace std;



int main() 
{   
    int t, i, cont = 0;

    for (i = 0; i < 5; i++)
    {
        cin >> t;
        if (t % 2 == 0)
        {
            cont += 1;
        }
    }
    cout << cont << " valores pares" << endl; 
    return 0;
}