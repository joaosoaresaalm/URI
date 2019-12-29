#include <bits/stdc++.h>

using namespace std;




int fib(int n)
{
    if(n <= 2) return 1;
    else return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    int fib[46];

    cin >> n;

    fib[0] = 0;
    fib[1] = 1;

    cout << fib[0] << " " << fib[1] << " ";

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        if (i == (n-1))
        {
            cout << fib[i];
        }
        else
        {
            cout << fib[i] << " ";
        }
        
    }
    cout << endl;
    return 0;
}