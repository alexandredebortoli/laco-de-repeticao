#include <iostream>
using namespace std;

int main()
{
    int numInput, numSomados = 0, somaNumPares = 0, mediaArit;

    do
    {
        cout << "Digite um número inteiro ('0' para sair): ";
        cin >> numInput;

        if(numInput % 2 == 0)
        {
            somaNumPares += numInput;
            numSomados++;
        }
    } while (numInput != 0);

    mediaArit = somaNumPares / numSomados;
    cout << "Média Aritmética = " << mediaArit << endl;
    
    return 0;
}