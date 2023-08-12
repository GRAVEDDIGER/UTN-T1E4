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