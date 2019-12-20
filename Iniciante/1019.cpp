#include <bits/stdc++.h>

using namespace std;


int main()
{
    int val, h, m, s;
    cin >> val;

    h = val / 3600;
    m = val % 3600 / 60;
    s = val % 3600 % 60;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}