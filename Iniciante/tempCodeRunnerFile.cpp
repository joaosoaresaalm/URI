#include <bits/stdc++.h>

using namespace std;


int resolve(double a, double b, double c)
{
    double menor, meio, maior;

    if (a > b && a > c)
    {
        maior = a;
        if (b > c)
        {
            meio = b;
            menor = c;
        }
        else
        {
            meio = c;
            menor = b;
        }

    }else if (b > a && b > c)
    {
        maior = b;
        if (a > c)
        {
            meio = a;
            menor = c;

        }
        else 
        {
            meio = b;
            menor = a;
        }
    }else
    {
        maior = c;
        if (a > b)
        {
            meio = a;
            menor = b;
        }
        else
        {
            meio = b;
            menor = a;
        }

    }

    cout << maior << " " << meio << " " <<  menor << endl;

    if (maior >= (b+c)) cout << "NAO FORMA TRIANGULO" << endl;
    else if (pow(maior,2) == (pow(b, 2) + pow(c, 2))) cout << "TRIANGULO RETANGULO" << endl;
    else if (pow(maior, 2) > pow(b,2) +  pow(c,2)) cout << "TRIANGULO OBTUSANGULO" << endl;
    else if (pow(maior, 2) < pow(b,2) +  pow(c,2)) cout << "TRIANGULO ACUTANGULO" << endl;
    if ((a == b) && (b == c)) cout << "TRIANGULO EQUILATERO";
    else if ((a == b) || (b == c) || (a == c)) cout << "TRIANGULO ISOSCELES" << endl;
}

int main()
{
    double a, b, c;

    cin >> a >> b >> c;
    resolve(a, b, c);
    
    return 0;
}