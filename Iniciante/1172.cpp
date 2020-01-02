#include <bits/stdc++.h>

using namespace std;


int main()
{
    int e;
    for (int i = 0; i < 10; i++)
    {
        cin >> e;
        if (e <= 0) e = 1;
        cout << "X[" << i << "] = " << e << endl;


    }
    return 0;
    
}