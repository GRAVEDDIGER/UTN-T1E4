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
Esta funcion toma por parametro un puntero a char, un vector de char de tipo constante ("Texto a mostrar") y un entero que define la longitud de la variable que deseo ingresar.
Saca por consola el texto definido en el segundo parametro y luego obtiene una variable de la longitud establecida en el tercer parametro y la pasa por referencia a la variable entrada que esta definida fuera de esta funcion 

```c++
void getData(char *entrada, const char salida[], int largo)
{
    cout << salida << endl;
    cin.getline(entrada, largo);
}
```

#### cadenas.h
Esta funcion toma por parametro una cadena de texto como puntero a una variable, un entero con la longitud de esa cadena y un char a ser comparado. 
y devuelve un entero con la cantidad de coincidencias que encuentra comparando letra a letra. 
En proxima version lo realizare usando expresiones regulares para asegurar performance

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