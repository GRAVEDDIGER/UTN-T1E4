#include <iostream>
using namespace std;

void getData(char *entrada, const char salida[], int largo)
{
    for (int i = 0; i < 32; i++)
    {
        entrada[i] = ' ';
    }
    cout << salida << endl;
    cin.getline(entrada, largo);
}
