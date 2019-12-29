#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, aux = 0;
    
    cin >> n;

    
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            aux += 1;
        }
        else
        {
            aux *= i;
        }
        
    }
    cout << aux << endl;
}