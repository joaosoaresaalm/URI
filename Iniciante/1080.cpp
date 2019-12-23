#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, maior = 0, pos = 0;

    for (int i = 0; i < 100; i++)
    {
        
        cin >> t;
        if (maior < t)
        {
            maior = t; 
            pos = i;
        } 
    }
    cout << maior << endl;
    cout << pos + 1 << endl;
    return 0;   
}