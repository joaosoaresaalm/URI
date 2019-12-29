#include <bits/stdc++.h>

using namespace std;

int main()
{
    double soma = 1;
    int num = 2;
    for (int i = 3; i < 40; i++)
    {
        soma += (float)i /(float) num;
        i++;
        num *= 2;

    }
    cout << fixed << setprecision(2) << soma << endl;
    
    return 0;
}