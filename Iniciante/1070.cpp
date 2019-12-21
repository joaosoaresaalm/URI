#include <bits/stdc++.h>

using namespace std;


void resolve(int t)
{

    for (int j = t; j < t+ 12; j++)
    {
        if (j % 2 != 0)
        {
            cout << j << endl;
        }
    }
}

int main() 
{   
    int t;
    cin >> t;
    resolve(t);
    return 0;
   
}