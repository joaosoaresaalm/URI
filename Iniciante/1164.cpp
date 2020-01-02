#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, num, perfeito = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        perfeito = 0;
        for (int j = 1; j < num; j++)
        {
            if (num % j == 0)
            {
                perfeito += j;
                if (perfeito > num) break;
            }
            
        }

        if (perfeito == num) cout << perfeito << " eh perfeito" << endl;
        else cout << num << " nao eh perfeito" << endl;
    }
    return 0;
}