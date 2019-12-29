#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, op = 1;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << op << " " << op*op << " " << op*op*op << endl;
        op += 1;
    }
}