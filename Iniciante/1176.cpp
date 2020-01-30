#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, fibo;
    long long  int fib[65];
    fib[0] = 0;
    fib [1] = 1;

    cin >> n;
    for (int i = 2; i <= 60; i++)
    {
        fib[i] = fib[i-2] + fib[i-1];

    }

    for (int j = 0; j < n; j++)
    {
        cin >> fibo;
        cout << "Fib(" << fibo << ") = " << fib[fibo] << endl;
    }
    
}