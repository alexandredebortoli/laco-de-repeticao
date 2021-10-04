#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float op1, op2, resultado;
    int operador;

    do
    {
        cout << "IT WORKS!" << endl;
        cout << "Digite um número: ";
        cin >> op1;
        cout << "Digite um número: ";
        cin >> op2;

        if(op1 != 0 || op2 != 0)
        {
            cout << "Escolha uma operação (1- soma, 2- produto, 3- divisão, 4- potência): ";
            cin >> operador;
            
            switch(operador)
            {
                case 1:
                    resultado = op1 + op2;
                    cout << "Resultado: " << resultado << endl;
                    break;
                case 2:
                    resultado = op1 * op2;
                    cout << "Resultado: " << resultado << endl;
                    break;
                case 3:
                    if(op2 == 0)
                        cout << "Não é possível dividir por 0." << endl;
                    else
                    {
                        resultado = op1 / op2;
                        cout << "Resultado: " << resultado << endl;
                    }
                    break;
                case 4:
                    if(op2 == 0)
                        resultado = 1;
                    else
                    {
                        resultado = op1;
                        for(int i = op2; i > 1; i--)
                        {
                            resultado = resultado * op1;
                        }
                    }
                    cout << "Resultado: " << resultado << endl;
                    break;
            }
        }

    } while (op1 != 0 || op2 != 0);
    

    return 0;
}