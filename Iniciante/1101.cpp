#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n, aux, soma = 0;

    while(1)
    {
        cin >> m >> n;
        if (m <= 0 || n <= 0) break;

        if (m > n)
        {
            aux = m;
            m = n;
            n = aux;
        }
        soma = 0;
        for (int i = m; i <= n; i++)
        {
            soma += i;
            cout << i << " "; 
            
        }
        cout << "Sum=" << soma << endl;
    }
}