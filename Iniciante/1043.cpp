#include <bits/stdc++.h>

using namespace std;


void resolve(double a, double b, double c)
{   
    double area, perimetro;

    if (a < (b+c) && b < (a+c) && c < (a+b))
    {
        perimetro = a + b + c;
        cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
    }else
    {
        area = ((a + b)*c)/2;
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }
}

int main()
{
    double a, b, c;

    cin >> a >> b >> c;

    resolve(a, b, c);
}