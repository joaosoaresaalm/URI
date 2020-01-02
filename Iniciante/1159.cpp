#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, pares = 0;

    while (1)
    {
        cin >> x;
        if (x == 0) break;

        pares = 0;

        
        if (x % 2 == 0)
        {
            pares += x;
        }
        else
        {
            
            pares += ++x;
        }
        for (int i = 0; i < 4; i++)
        {
            x += 2;
            pares += x;
        }
            
        
        cout << pares << endl;
    }
    return 0;
}