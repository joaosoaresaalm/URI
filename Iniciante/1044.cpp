#include <bits/stdc++.h>

using namespace std;


void resolve(int a, int b)
{
    if ( a % b == 0 || b % a == 0) cout << "Sao Multiplos" << endl;
    else cout << "Nao sao Multiplos" << endl;
}

int main()
{
    int a, b;

    cin >> a >> b;
    resolve(a, b);
    
    return 0;
}