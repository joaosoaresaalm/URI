#include <bits/stdc++.h>

using namespace std;



int main() 
{   
    int t, i, pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (i = 0; i < 5; i++)
    {
        cin >> t;
        if (t % 2 == 0)
        {
            pares += 1;
        }
        else
        {
            impares += 1;
        }
        if (t > 0) positivos += 1;
        else if (t < 0) negativos += 1;
        
    }
    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl; 
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;
    return 0;
}