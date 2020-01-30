#include <bits/stdc++.h>

using namespace std;

int main()
{
    double M[12][12];
    char t;
    int l;
    double soma = 0.0;

    cin >> l >> t;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
            if (i == l)
            {
                soma += M[i][j];
            }
        }
    }
    if (t == 'S') cout << fixed << setprecision(1) << soma << endl;
    else cout << fixed << setprecision(1) << soma/12.0 << endl;
}