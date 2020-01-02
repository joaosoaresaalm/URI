#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n;


    for (int i = 0; i < 100; i++)
    {
        cin >> n;
        if (n <= 10) cout << "A[" << i << "] = " << fixed << setprecision(1) <<  n << endl;
     
    }
    return 0;
}