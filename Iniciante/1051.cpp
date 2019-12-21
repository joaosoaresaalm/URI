#include <bits/stdc++.h>

using namespace std;

void resolve(double salario)
{
    double dif, imposto;

    if (salario >= 0.0 && salario <= 2000.00) cout << "Isento" << endl;
    else if (salario >= 2000.01 && salario <= 3000.00){
        cout << "R$ "<< fixed << setprecision(2) << (salario - 2000.00)*0.08 << endl;
    }else if (salario >= 3000.01 && salario <= 4500.00){
        cout << "R$ " <<fixed << setprecision(2) <<(salario - 3000.00)*0.18 + 1000.00 *0.08 << endl;
    }else {
        cout << "R$ " << fixed << setprecision(2) << (salario - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08 << endl;
    }
}



int main()
{
    double salario;
    cin >> salario;
    
    resolve(salario);
    return 0;
}