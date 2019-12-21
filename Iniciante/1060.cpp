#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, aux;
    cin >> a;

    for (int i = 0; i < 6; i++) {
        cin >> a;
        if (a > 0)
        {
            aux += 1;
        }
    }

    cout << aux << " valores positivos" << endl;
}