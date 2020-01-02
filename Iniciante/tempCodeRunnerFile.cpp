#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v;
    int mult = 0;

    cin >> v;
    for (int i = 0; i < 10; i++)
    {    
        if (i == 0)
        {
            cout << "N[" << i << "] = " << v << endl;
        } 
        else if (i == 1)
        {
        cout << "N[" << i << "] = " << v*v + 1 << endl;
        v = v* v + 1;        
        }    
        else
        {
         mult += v * 2;
         cout << "N[" << i << "] = " << mult << endl;
         
        }
    }
    return 0;
}