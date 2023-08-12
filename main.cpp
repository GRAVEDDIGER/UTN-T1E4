#include <iostream>
#include "input.h"
#include "cadenas.h"
using namespace std;
const int longitudLote = 5;
void loadBatch(int longitud, char texto[][32])
{
    for (int i = 0; i < longitud; i++)
    {
        getData(texto[i], "Ingrese Palabra", 32);
    }
}
int processBatch(int longitud, char texto[100][32])
{
    int mayor = 0;
    int ubicacion = 0;
    for (int i = 0; i < longitud; i++)
    {
        cout << texto[i] << endl;

        int temporary;
        temporary = contar(texto[i], 32, 'a');
        if (mayor < temporary)
        {
            mayor = temporary;
            ubicacion = i;
        }
    }
    return ubicacion;
}
int main()
{
    char texto[longitudLote][32];
    int masLetrasIguales = 0;
    loadBatch(longitudLote, texto);
    masLetrasIguales = processBatch(longitudLote, texto);
    cout << "La palabra con mas letras a es " << texto[masLetrasIguales] << " numero de orden " << masLetrasIguales << " Tiene " << masLetrasIguales << " letras iguales" << endl;
    system("pause");
    return 0;
}
