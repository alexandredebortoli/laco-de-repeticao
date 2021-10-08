#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int input, fatorial = 1;
    
    cout << "Digite um número inteiro: ";
    cin >>  input;

    for(input; input >= 1; input--)
    {
        fatorial *= input;
    }

    cout << "O fatorial de " << input << " é " << fatorial << endl;
    
    return 0;
}