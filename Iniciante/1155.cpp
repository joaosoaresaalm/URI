#include <bits/stdc++.h>

using namespace std;



int main()
{
    float S = 0.0;
    for (int i = 1; i <= 100; i++)
    {
        S +=1/(float)i;
    }
    cout  << fixed << setprecision(2) << S << endl;
    return 0;
}