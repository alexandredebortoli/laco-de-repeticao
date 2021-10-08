#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int input;
    float series = 0;
    
    cout << "Digite o valor N: ";
    cin >> input;

    for(int i = 1; i <= input; i++)
    {
        series += 1.0/i;
    }

    cout << "Resultante da série = " << series << endl;
    
    return 0;
}