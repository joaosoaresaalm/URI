#include <bits/stdc++.h>

using namespace std;


int main()
{
    int x, y, op;
    int quantGrenais = 0, vitGremio = 0, vitInter = 0, impate = 0;

    cin >> x >> y;
    quantGrenais += 1;
    while(1)
    {
        //quantGrenais += 1;
        if (x > y)
        {
            vitInter += 1;
        }
        else if ( x < y)
        {
            vitGremio += 1;
        }
        else
        {
            impate += 1;
        }
        
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> op;


        if (op == 1)
        {
            cin >> x >> y;
            quantGrenais += 1;
        }
        else
        {
            break;
        }
        
    }
    cout << quantGrenais << " grenais" << endl;
    cout << "Inter:" << vitInter << endl;
    cout << "Gremio:" << vitGremio << endl;
    cout << "Empates:" << impate << endl;
    if (vitInter > vitGremio) cout << "Inter venceu mais" << endl;
    else cout << "Gremio venceu mais" << endl;


}