#include <bits/stdc++.h>

using namespace std;




int main() 
{
    int t, i;
    cin >> t;

    while(t--)
    {
        cin >> i;
        if ((i > 0) && i % 2 == 0) cout << "EVEN POSITIVE" << endl;
        else if (( i > 0) && i % 2 != 0) cout << "ODD POSITIVE" << endl;
        else if (( i < 0) && i % 2 == 0) cout << "EVEN NEGATIVE" << endl;
        else if (( i < 0) && i % 2 != 0) cout << "ODD NEGATIVE" << endl;
        else cout << "NULL" << endl;
    }
    return 0;
}