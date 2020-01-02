#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    int N[1000];

    cin >> t;
    n = 0;

    for (int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << n << endl;
        n++;

        if (t == n) n = 0;
    }
    return 0;
}