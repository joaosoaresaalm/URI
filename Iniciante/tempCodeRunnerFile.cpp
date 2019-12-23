#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    for (int i = 0; i < 3; i++)
    {
       
        cout << a/b << fixed << setprecision(2) << endl;
        if (b == 0) cout << "divisao impossivel" << endl;
    }
}