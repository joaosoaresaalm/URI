#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, z;
    int cont = 0, op = 0;
    
    
    cin >> x;
    cin >> z;

    while (z <= x)
    {
        cin >> z;
    }
    
    while (cont < z)
    {
        cont += x;
        op++;
        x++;
    }
    cout << op << endl;
}