#include <bits/stdc++.h>

using namespace std;

int main() {

    int diaInicial, hi, mi, si, diaFinal , hf, mf, sf;
    int ht, mt, dt, st;;
    string dia1, dia2, sep1, sep2, sep3, sep4;
    cin >> dia1 >> diaInicial;
    cin >> hi >> sep1 >> mi >> sep2 >> si;
    cin >> dia2 >> diaFinal;
    cin >> hf >> sep3 >> mf >> sep4 >> sf;

    if (hf > hi) {
        ht = 24 - (hf + hi);
    }else {
        ht = 24 + (hf - hi);
    }

    if (mf > mi) {
        mt = mf - mi;
    }else {
        mt = mi - mf;
    }

    if (sf > si) {
        st = sf - si;
    }else {
        st = si - sf;
    }
    
    dt = diaFinal - diaInicial;
    if (ht == 24) {
        dt = diaFinal - diaInicial;
    }else {
        dt--;
    }
    cout << dt << " dia(s)" << endl;
    cout << ht << " hora(s)" << endl;
    cout << mt << " minuto(s)" << endl;
    cout << st << " segundo(s)" << endl;

    return 0;


}