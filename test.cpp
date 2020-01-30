#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n1, n2, n3, avg, freq;

    cin >> n1 >> n2 >> n3 >> freq;

    avg = ((n1*2) + (n2*2) + (n3*3))/ 7;
    freq = freq * 100;

    cout << "Frequencia: " << freq << "%" << endl;
    cout << "Media: "  << fixed << setprecision(1) << avg << endl;

    if (freq < 75)
    {
        cout << "Aluno reprovado por faltas!" << endl;

    }
    else if (avg > 9) cout << "Aluno aprovado com louvor!" << endl;
    else if (avg >= 6 and avg <= 9) cout << "Aluno aprovado" << endl;
    else if (avg >= 4 and avg < 6) cout << "Aluno de recuperação!" << endl;
    else cout << "Aluno reprovado!" << endl;

    return 0;
}