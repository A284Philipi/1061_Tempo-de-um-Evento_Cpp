#include <iostream>

using namespace std;

int main()
{
    long long int dia, hora, minuto, segundo, segundo2, segundo1;
    string variante;
    cin >> variante;
    cin >> dia;
    cin >> hora;
    cin >> variante;
    cin >> minuto;
    cin >> variante;
    cin >> segundo;
    segundo1 = segundo + (minuto * 60) + (hora * 60 * 60) + (dia * 60 * 60 * 24);
    cin >> variante;
    cin >> dia;
    cin >> hora;
    cin >> variante;
    cin >> minuto;
    cin >> variante;
    cin >> segundo;
    segundo2 = segundo + (minuto * 60) + (hora * 60 * 60) + (dia * 60 * 60 * 24);
    segundo = segundo2 - segundo1;
    dia = segundo / (60 * 60 * 24);
    segundo = segundo - (dia * 60 * 60 * 24);
    hora = segundo / (60 * 60);
    segundo = segundo - (hora * 3600);
    minuto = segundo / 60;
    segundo = segundo - (minuto * 60);
    cout << dia << " dia(s)" <<endl;
    cout << hora << " hora(s)" <<endl;
    cout << minuto << " minuto(s)" <<endl;
    cout << segundo << " segundo(s)" <<endl;
    return 0;
}
