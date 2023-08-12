#include <iostream>
#include "input.h"
#include "cadenas.h"
using namespace std;

int main()
{
    char texto[32];
    getData(texto, "Ingrese Nombre", 32);
    cout << texto << contar(texto, 32, 'a') << endl;
    system("pause");
    return 0;
}
