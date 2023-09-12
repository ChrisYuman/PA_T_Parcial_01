#include "Ejercicio02.h"

int Ejercicio02::rob(int houses[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int casanterior = 0;
    int casaanteanterior = 0;
    for (int i = 0; i < n; i++)
    {
        int casas = casanterior;
        if(casaanteanterior + houses[i] > casanterior)
        {
            casanterior = casaanteanterior + houses[i];
        }
        casaanteanterior = casas;
    }
    return casanterior;
}
