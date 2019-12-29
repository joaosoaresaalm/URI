#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m,  op = 1;
    cin >> n >> m;;

    for (int i = 1 ; i <= m; i++)
    {
        cout << op << " " << op + 1 << " " << op + 2 << endl;
        op += n;
        if (op == 100) break;
        else continue;
    }
}