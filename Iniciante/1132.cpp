#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x , y, cont = 0, op;

    cin >> x >> y;
    if (x > y)
    {
        op = x;
        x = y;
        y = op;
    }

    for (int i = x; i <= y; i++)
    {
        if (i % 13 != 0)
        {
            cont += i;
        }
    
    }
    cout << cont << endl;
    return 0;
}