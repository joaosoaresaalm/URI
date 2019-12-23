#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y,soma = 0, aux;
    cin >> n;
   
    for (int i = 0; i < n; i++)
    {
        if (n == 0) break;
        cin >> x >> y;
        if (x > y)
        {
            aux = x;
            x = y;
            y = aux;
        }
        soma = 0;
        for(int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0) soma+=i;
        }
          
        cout << soma << endl;    
    }
  
    return 0;
}