#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    cin >> n;

    int i = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            a  = pow(i, 2);
            printf("%d^2 = %d",i,i*i);
            printf("\n");
        }
    }
    
}