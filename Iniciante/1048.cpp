#include <bits/stdc++.h>

using namespace std;

void resolve(double salario)
{
    double reajuste, novoSalario;

    if (salario > 0 && salario <= 400.00)
    {
        novoSalario = salario + (salario*0.15);
        reajuste = salario*0.15;
        cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 15 %" << endl;    
    }
    else if (salario >= 400.01 && salario <= 800.00)
    {
        novoSalario = salario + (salario*0.12);
        reajuste = salario*0.12;
        cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 12 %" << endl;  
    }
    else if (salario >= 800.01 && salario <= 1200.00)
    {
        novoSalario = salario + (salario*0.10);
        reajuste = salario*0.10;
        cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 10 %" << endl;  
    }
    else if (salario >= 1200.01 && salario <= 2000.00)
    {
        novoSalario = salario + (salario*0.07);
        reajuste = salario*0.07;
        cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 7 %" << endl;  
    }
    else 
    {
        novoSalario = salario + (salario*0.04);
        reajuste = salario*0.04;
        cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 4 %" << endl;  
    }
}

int main()
{
    double salario;

    cin >> salario;
    resolve(salario);
    return 0;
}