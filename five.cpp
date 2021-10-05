#include <iostream>
using namespace std;

int main()
{
    int soma = 0;
    
    for(int i = 100; i <= 200; i++)
    {
        soma = soma + i;
    }

    cout << "Soma: " << soma << endl;

    return 0;
}