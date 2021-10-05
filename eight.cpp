#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float numInput;

    do
    {
        cout << u8"Digite um número real positivo: ";
        cin >> numInput;

        if(numInput < 0)
            cout << "Número invalido, tente novamente." << endl;
    } while (numInput < 0);

    cout << "O número " << numInput << " é valido." << endl;
    

    return 0;
}