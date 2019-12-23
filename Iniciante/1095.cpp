#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j = 60, seq_ij;
    int i = 1;
    while(j != 0)
    {
        
        cout << "I="<< i << " " << "J=" << j << endl;
        i += 3;
        j -=5;

    }
    cout << "I=" << i  << " " << "J=" << j  << endl;  
    return 0;
}