#include <bits/stdc++.h>

using namespace std;

int main()
{
    int par[5], impar[5];
    int n, p, im, aux;

    im = 0;
    p = 0;
    for (int i = 0; i < 15; i++)
    {   
        cin >> n;

        if (n % 2 == 0)
        {
            par[p] = n;
            p++;
        }
        else
        {
            impar[im] = n;
            im++;
        }
        
        if (p == 5)
        {
            aux = 0;
            while(aux != 5){ cout << "par[" << aux << "] = " << par[aux] << endl; aux++; }
            p = 0;        
        }
        if (im == 5)
        {
            aux = 0;
            while(aux != 5){ cout << "impar[" << aux << "] = " << impar[aux] << endl; aux++; } 
            im = 0;
        }
        if (i == 14)
        {
            aux = 0;
            while (aux < im){ cout << "impar[" << aux << "] = " << impar[aux] << endl; aux++; }
            aux = 0;
            while(aux < p){ cout << "par[" << aux << "] = " << par[aux] << endl; aux++;}
        }



    }
}