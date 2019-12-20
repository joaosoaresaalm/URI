#include <bits/stdc++.h>

using namespace std;


void resolve(int hi, int mi, int hf, int mf)
{
    int ht, mt;

    ht = hf - hi;
    if (ht < 0)
    {
        ht = 24 + (hf - hi);

    }
    
    mt = mf - mi;

    if (mt < 0)
    {
        mt = 60 + (mf - mi);
        ht--;
    }

    if (hi == hf && mi == mf) cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    else cout << "O JOGO DUROU " << ht <<  " HORA(S) E " << mt << " MINUTO(S)" << endl;
}

int main()
{
    int hi, mi, hf, mf, ht, mt;

    cin >> hi >> mi >> hf >> mf;

    resolve(hi, mi, hf, mf);
    return 0;
}