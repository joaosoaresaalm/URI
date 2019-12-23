#include <bits/stdc++.h>

using namespace std;

int main()
{
    int op;
    int alcool = 0, gasolina = 0, diesel = 0;

    while(1)
    {
        cin >> op;
        if (op == 1) alcool++;
        else if (op ==2) gasolina++;
        else if (op == 3) diesel++;
        else if (op == 4) break;
        else continue;
    } 
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}