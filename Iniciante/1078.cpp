#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cont = 0;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cont = n*i;
        cout << i << " x " << n << " = " << cont << endl;
    }
    return 0;
}