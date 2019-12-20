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

    //cout << maior << " " << meio << " " <<  menor << endl;

    if (maior >= (meio+menor)) cout << "NAO FORMA TRIANGULO" << endl; 
    else
    {    
        if (pow(maior,2) == (pow(meio, 2) + pow(menor, 2))) cout << "TRIANGULO RETANGULO" << endl;
        if (pow(maior, 2) > (pow(meio,2) +  pow(menor,2))) cout << "TRIANGULO OBTUSANGULO" << endl;
        if (pow(maior, 2) < (pow(meio,2) +  pow(menor,2))) cout << "TRIANGULO ACUTANGULO" << endl;    
        if  ((maior == meio) && (meio == menor) && (maior == menor)) cout << "TRIANGULO EQUILATERO" << endl;
        else 
        {
            if ((maior == meio) || (meio == menor) || (maior == menor)) cout << "TRIANGULO ISOSCELES" << endl;
        }
    }     
}

int main()
{
    double a, b, c;

    cin >> a >> b >> c;
    resolve(a, b, c);
    
    return 0;
}
