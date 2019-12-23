#include <bits/stdc++.h>

using namespace std;

int main()
{
    double nota, cont = 0;
    double media = 0;

    cin >> nota;

    while (1)
    {
        if (nota >= 0 && nota <= 10)
        {
            media += nota;
            cont += 1;
        }
        else cout << "nota invalida" << endl;

        if (cont == 2)
        {
            
            cout << "media = " << (double)media/2 << fixed << setprecision(2) << endl;
            break;
        }
        cin >> nota;
    }
}