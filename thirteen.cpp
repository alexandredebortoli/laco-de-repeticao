#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int input, menor;
    
    /*cout << "Digite 20 números inteiros:" << endl;
    cin >> input;
    menor = input;

    for(int i = 1; i <= 19; i++)
    {
        cin >> input;

        if(input <= menor)
            menor = input;
    }*/

    for(int i = 1; i <= 20; i++)
    {
        cout << "Digite o " << i << "o. número: ";
        cin >> input;
        if(i == 1)
            menor = input;
        
        if(input < menor)
            menor = input;
    }

    cout << "menor número: " << menor << endl;
    
    return 0;
}