#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float peso, maior, menor;

    for(int i = 1; i <= 25; i++)
    {
        cout << "Digite o " << i << "o. peso: ";
        cin >> peso;
        if(i == 1)
        {
            maior = peso;
            menor = peso;
        }

        if(peso > maior)
            maior = peso;
        if(peso < menor)
            menor = peso;
    }

    cout << "Maior peso: " << maior << endl;
    cout << "Menor peso: " << menor << endl;
    
    return 0;
}