#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, a, b;

    cin >> x;
    for (int i = 0; i < x; i++)
    {
       cin >> a >> b;
       if (b == 0) cout << "divisao impossivel" << endl;
        else 
        {
            cout << fixed << setprecision(1) << a / b << endl;
        }
        return 0;
    }
}