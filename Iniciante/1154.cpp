#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int cont = 0;
    double media = 0.0;
    
   while(cin >> n)
   {
        if (n < 0) break;
        media += n;
        cont +=1.0;  
        

   }
    cout << (media / cont) <<  fixed << setprecision(2) << endl;
    return 0;
}