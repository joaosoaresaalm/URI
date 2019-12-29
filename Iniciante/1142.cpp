#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, op = 1;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << op << " " << op + 1 << " " << op + 2 <<  " " << "PUM" << endl;
        op += 4;
    }
    return 0;
}
