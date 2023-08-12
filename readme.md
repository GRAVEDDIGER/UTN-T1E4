# UTN Laboratorio 2 Tema 1 Ejercicio 4

## Planteo

Dada una lista de 100 palabras se pide hallar e imprimir que palabra tiene más letras 'a' entre sus
caracteres.

Se recomienda usar una función CONTAR que reciba un carácter y una cadena y retorne la
cantidad de veces que ese carácter aparece en esa cadena.
Resolver de dos maneras:

* Usar una función CONTAR que debe ser llamada con la letra 'a' como argumento.
* Usar una función CONTAR que sólo sabe contar caracteres 'a' en una cadena.

## Resolucion

### Funciones

#### input.h

```c++
void getData(char *entrada, const char salida[], int largo)
{
    cout << salida << endl;
    cin.getline(entrada, largo);
}
```

#### cadenas.h
```c++
int contar(char *texto, int longitud, const char letra)
{
    int counter;
    for (int i = 0; i < longitud; i++)
    {
        if (texto[i] == letra)
        {
            counter++;
        }
    }
    return counter;
}
```