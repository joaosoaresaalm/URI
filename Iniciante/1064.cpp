#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, cont = 0, media = 0;
    double aux = 0, i;

    for (i = 0; i < 6; i++) {
        cin >> a;
        if (a > 0)
        {  
            aux += 1;
            cont += a;

        }
    
    }
    media = cont / aux;
    
    cout << aux << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;
    
    return 0;
}