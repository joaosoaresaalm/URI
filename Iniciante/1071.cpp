#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    int aux = 0;
    cin >> x >> y;

    for (int i = y + 1; i < x; i++)
    {
        if (i % 2 != 0)
        {
            aux += i;
        }
    }
    cout << aux << endl;
    return 0;
}