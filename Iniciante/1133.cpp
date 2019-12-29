#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, op;
    int soma = 0;

    cin >> x >> y;
    if (x > y)
    {
        op = x;
        x = y;
        y = op;
    }

    for (int i = x + 1; i < y; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
           cout << i << endl;
        }
    }
    
}