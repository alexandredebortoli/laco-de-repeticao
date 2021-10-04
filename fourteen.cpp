#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int peso, maior, menor;

    cout << "Digite o peso das 25 pessoas:" << endl;
    cin >> peso;
    maior = peso;
    menor = peso;

    for(int i = 2; i <= 25; i++)
    {
        cin >> peso;

        if(peso > maior)
            maior = peso;
        else if(peso < menor)
            menor = peso;
    }

    cout << "Maior peso: " << maior << endl;
    cout << "Menor peso: " << menor << endl;
    
    return 0;
}