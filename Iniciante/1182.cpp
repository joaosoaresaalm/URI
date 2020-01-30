#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    char t;
    double soma = 0.0;
    double M[12][12];

    cin >> c >> t;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
            if (j == c)
            {
                soma += M[i][j];
            }
        }
    }
    if (t == 'S') cout << fixed << setprecision(1) << soma << endl;
    else cout << fixed << setprecision(1) << soma/12.0 << endl;
    return 0;
}