#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, impares = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        impares = 0;
        
        if (x % 2 != 0)
        {
            impares += x;
        }
        else
        {
            x += 1;
            impares += x;
        }
        for (int i = 0; i < y-1; i++)
        {
            x += 2;
            impares += x;
        }
        cout << impares << endl;
        
    }
    return 0;
}


