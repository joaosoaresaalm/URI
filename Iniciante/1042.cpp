#include <bits/stdc++.h>

using namespace std;




void sorted(int a, int b, int c)
{
    int menor, meio, maior;

    if (a < b &&  a < c)
    {
        menor = a;
        if (b < c)
        {
            meio = b;
            maior = c;

        }else 
        {
            meio = c;
            maior = b;
        }
    }else if (b < a && b < c)
    {
        menor = b;
        if (a < c)
        {
            meio = a;
            maior = c;
        }else
        {
            meio = c;
            maior = a;
        }
        
    }else
    {
        menor = c;
        if (a < b)
        {
            meio = a;
            maior = b;
        }else
        {
            meio = b;
            maior = a;
        }
        
    }
    cout << menor << endl << meio << endl << maior << endl;
    cout << endl;   
}
int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    
    sorted(a, b, c);
    cout << a  << endl << b << endl << c << endl;
    
}