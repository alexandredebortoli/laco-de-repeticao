#include <iostream>
using namespace std;

int main()
{
    int base, expoente, resultado;

    cout << "Digite um numero inteiro e positivo para a base: ";
    cin >> base;
    cout << "Digite um numero inteiro e positivo para o expoente: ";
    cin >> expoente;

    resultado = base;

    while(expoente > 1)
    {
            resultado *= base;
            expoente--;
    }

    cout << "Resultado = " << resultado << endl;

    return 0;
}