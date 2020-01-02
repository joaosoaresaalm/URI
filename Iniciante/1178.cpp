#include <bits/stdc++.h>

using namespace std;

int main()
{
  double n;
  cin >> n;
  for (int i = 0; i < 100; i++)
  {
    //cout << "N[" << i << "] = " << fixed << setprecision(5)  << n << endl;
    printf("N[%d] = %.4f\n", i, n);
    n = n /2.0;
  }
  return 0;
}