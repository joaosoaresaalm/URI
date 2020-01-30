#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, vetor[10], e, menor = 0, pos;

    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> e;
        vetor[i] = e;

        if (vetor[i] < menor)
        {
            menor = vetor[i];
            pos = i;

        }
    }
    cout << "Menor valor: "<< menor << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
}