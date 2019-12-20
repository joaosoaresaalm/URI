#include <bits/stdc++.h>

using namespace std;



// versão 1
int main()
{
  int valor, cont100, cont50, cont20, cont10, cont5, cont2, cont1, resto;
  while(cin >> valor)
  {
    cout << valor << endl;  
    cont100 = valor/100;
    resto = valor % 100;
    
    cont50 = resto / 50;
    resto = resto % 50;

    cont20 = resto / 20;
    resto = resto % 20;

    cont10 = resto / 10;
    resto = resto % 10;

    cont5 = resto / 5;
    resto = resto % 5;

    cont2 = resto / 2;
    resto = resto % 2;

    cont1 = resto / 1;



  }
  cout << cont100 << " nota(s) de R$ 100,00" << endl;
  cout << cont50 << " nota(s) de R$ 50,00" << endl;
  cout << cont20 << " nota(s) de R$ 20,00" << endl;
  cout << cont10 << " nota(s) de R$ 10,00" << endl;
  cout << cont5 << " nota(s) de R$ 5,00" << endl;
  cout << cont2 << " nota(s) de R$ 2,00" << endl;
  cout << cont1 << " nota(s) de R$ 1,00" << endl;
  return 0;
}



// versão 2


int main()
{
    int valor, aux, arr[] = {100, 50, 20, 10, 5, 2, 1};
    int i , moedas [] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    while(cin >> valor)
    {
        cout << "NOTAS:" << endl;    
        for (i = 0; i < 7; i++)
        {
            aux = valor / arr[i];
            valor = valor % arr[i];

            cout << aux << " nota(s) de R$ " << arr[i] <<",00" << endl;
        }

        cout << "MOEDAS:" << endl;
        for (int j = 0; j < 7; j++)
        {
            aux = valor / moedas[i];
            valor = valor % moedas[i];

            cout << aux << " moeda(s) de R$ " << arr[i] <<",00" << endl;

        }

    }
}