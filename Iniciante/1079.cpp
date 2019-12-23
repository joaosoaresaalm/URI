#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    float nota1, nota2, nota3, media = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> nota1 >> nota2 >> nota3;
        media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
        cout << fixed << setprecision(1) << media << endl;
    }
    

    return 0;
}