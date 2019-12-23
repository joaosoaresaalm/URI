
#include <bits/stdc++.h>
using namespace std;

/*
int main()
{
    int j = 7, cont = 0;
    int i = 1;
    while(i != 9)
    {
        
        cout << "I="<< i << " " << "J=" << j << endl;
        j -= 1;
        cont += 1;

        if (cont == 3)
        {
            i += cont;
            cont = 0;
            j = 7;
        }

    }
    cout << "I=" << i  << " " << "J=" << j  << endl;  
    return 0;
}
*/



int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 7; j > 4; j--)
        {
            cout << "I=" << i << " " << "J=" << j << endl;
        }
        i++;
    }
    return 0;
}