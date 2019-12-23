#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, quant = 0, contCoelho = 0, contSapo = 0, contRato = 0, totalCobaia = 0;
    double percentSapo = 0.0 , percentCoelho = 0.0 , percentRato = 0.0;
    string tipo;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        
        cin >> quant >> tipo;
        totalCobaia += quant;
        if (tipo == "C")
        {
            contCoelho += quant;
        }
        else if (tipo == "S")
        {
            contSapo += quant;
        }
        else
        {
            contRato += quant;
        }

        percentCoelho = contCoelho * 100.00 /totalCobaia;
        percentRato = contRato * 100.00 /totalCobaia;
        percentSapo = contSapo * 100.00/totalCobaia;
    }
    cout << "Total: " << totalCobaia << " cobaias" << endl;
    cout << "Total de coelhos: " << contCoelho << endl;
    cout << "Total de ratos: " << contRato << endl;
    cout << "Total de sapos: " << contSapo << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << percentCoelho << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << percentRato << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << percentSapo << " %" << endl;

    return 0;

}