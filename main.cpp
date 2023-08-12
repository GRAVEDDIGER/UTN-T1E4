#include <iostream>
#include "input.h"
using namespace std;

int main()
{
    char texto[15];
    getData(texto, "Ingrese Nombre");
    cout << texto << endl;
    system("pause");
    return 0;
}
