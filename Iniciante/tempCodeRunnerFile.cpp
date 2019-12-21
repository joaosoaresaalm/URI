    else if (salario >= 2000.01 && salario <= 3000.00)
        {
            dif = salario - 2000;
            imposto = dif * 0.08;
            cout << "R$ "<< fixed << setprecision(2) << imposto << endl;

        }
        else if (salario >= 3000.01 && salario <= 4500.00)
        {
            dif = salario - 3000;
            imposto = dif * 0.18 + 80.00;
            cout << "R$ " <<fixed << setprecision(2) << endl;
        }
        else
        {
            imposto = (salario - 4500) * 0.28 + 350.00;
            cout << "R$ " << fixed << setprecision(2) << endl;
        }