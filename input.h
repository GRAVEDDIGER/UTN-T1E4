#include <iostream>
using namespace std;

void getData(char *entrada, const char salida[], int largo)
{
    cout << salida << endl;
    cin.getline(entrada, largo);
}
