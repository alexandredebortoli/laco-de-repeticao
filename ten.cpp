#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    /*int prev = 1, current = 1, result;

    cout << prev << "," << current << ",";

    for(int i = 1; i <= 18; i++)
    {
        result = prev + current;
        if(i == 18)
            cout << result;
        else
            cout << result << ",";

        prev = current;
        current = result;
    }*/

    int t1 = 1, t2 = 1;

    for (int i = 1; i <= 10; i++)
    {
        cout << t1 << " - " << t2 << " - ";
        t1 = t1 + t2;
        t2 = t1 + t2;
    }
    
    return 0;
}