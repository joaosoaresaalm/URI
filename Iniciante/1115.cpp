#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a, b;
    
    cin >> a >> b;
    while(1)
    {
        if (a == 0 || b == 0) break;
        else if (a > 0 && b > 0) cout << "primeiro" << endl;
        else if (a < 0 && b > 0) cout << "segundo" << endl;
        else if (a < 0 && b < 0) cout << "terceiro" << endl;
        else cout << "quarto" << endl;
        cin >> a >> b;
    }
    return 0;
}
