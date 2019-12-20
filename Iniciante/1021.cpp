#include <bits/stdc++.h>

using namespace std;

int main()
{
    int valor, aux, arr[] = {10000, 5000, 2000, 1000, 500, 200, 100, 10, 50, 25, 10, 5, 1};
    int i;

    while(cin >> valor)
    {
        valor  *= 100 + 0.5;
        cout << "NOTAS:" << endl;    
        for (i = 0; i < 12; i++)
        {
            aux = valor / arr[i];
            valor = valor % arr[i];

            if (i <= 6) cout << aux << " nota(s) de R$ " << arr[i]/100 <<",00" << endl;
            else cout << aux << " moeda(s) de R$ " << setw(2) << arr[i]/100 <<",00" << endl;
            
        }
    }
}