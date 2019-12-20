#include <bits/stdc++.h>

using namespace std;

void resolve(string a, string b, string c)
{
    if (a == "vertebrado" && b == "ave" && c == "carnivoro") cout << "aguia" << endl;
        else if (a == "vertebrado" && b == "ave" && c == "onivoro") cout << "pomba" << endl;
        else if (a == "vertebrado" && b == "mamifero" && c == "onivoro") cout << "homem" << endl;
        else if (a == "vertebrado" && b == "mamifero" && c == "herbivoro") cout << "vaca" << endl;
        else if (a == "invertebrado" && b == "inseto" && c == "hematofago") cout << "pulga" << endl;
        else if (a == "invertebrado" && b == "inseto" && c == "herbivoro") cout << "lagarta" << endl;
        else if (a == "invertebrado" && b == "anelideo" && c == "hematofago") cout << "sanguessuga" << endl;
    else cout << "minhoca" << endl;

}



int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    resolve(a, b, c);
    return 0;
}