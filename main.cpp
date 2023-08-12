#include <iostream>
#include "input.h"
using namespace std;

int main()
{
    char texto[32];
    getData(texto, "Ingrese Nombre", 32);
    cout << texto << endl;
    system("pause");
    return 0;
}
