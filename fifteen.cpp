#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int input, par = 0, impar = 0;

    cout << "Digite 20 valores inteiros:" << endl;
    
    for(int i = 1; i <= 20; i++)
    {
        cin >> input;

        if(input % 2 == 0)
            par++;
        else
            impar++;
    }

    cout << "Quantidade de números pares: " << par << endl;
    cout << "Quantidade de números ímpares: " << impar << endl;
    
    return 0;
}