#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int idade, maioridade = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Digite sua idade: ";
        cin >> idade;

        if(idade >= 18)
            maioridade++;
    }

    cout << "pessoas com maioridade: " << maioridade << endl;
    
    return 0;
}