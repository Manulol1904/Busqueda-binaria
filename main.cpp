#include <iostream>
using namespace std;

int main()
{
    int valores1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150};
    int valores2[] = {10, 30, 50, 70, 90, 110, 130, 150, 170, 190, 210, 230, 250, 270, 290};
    int valores3[] = {20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280,300};
    int inf, sup, mid, valor;
    char band1 = 'F';
    char band2 = 'F';
    char band3 = 'F';
    int posicion1, posicion2, posicion3;
    valor = 120;

    // Búsqueda en valores1
    inf = 0;
    sup = 15;
    while (inf <= sup)
    {
        mid = (inf + sup) / 2;
        if (valores1[mid] == valor)
        {
            band1 = 'V';
            posicion1 = mid;
            break;
        }
        if (valores1[mid] > valor)
        {
            sup = mid - 1;
        }
        else
        {
            inf = mid + 1;
        }
    }

    // Búsqueda en valores2
    inf = 0;
    sup = 15;
    while (inf <= sup)
    {
        mid = (inf + sup) / 2;
        if (valores2[mid] == valor)
        {
            band2 = 'V';
            posicion2 = mid;
            break;
        }
        if (valores2[mid] > valor)
        {
            sup = mid - 1;
        }
        else
        {
            inf = mid + 1;
        }
    }

    // Búsqueda en valores3
    inf = 0;
    sup = 15;
    while (inf <= sup)
    {
        mid = (inf + sup) / 2;
        if (valores3[mid] == valor)
        {
            band3 = 'V';
            posicion3 = mid;
            break;
        }
        if (valores3[mid] > valor)
        {
            sup = mid - 1;
        }
        else
        {
            inf = mid + 1;
        }
    }

    if (band1 == 'V')
    {
        cout << "El número ha sido encontrado en la posición " << posicion1<<" del arreglo valores1 "  << endl;
    }
    else{
        cout << "El número no ha sido encontrado en el arreglo valores1 "<< endl;
    }
    if (band2 == 'V')
    {
        cout << "El número ha sido encontrado en la posición " << posicion2<<" del arreglo valores2 "  << endl;
    }
    else{
        cout << "El número no ha sido encontrado en el arreglo valores2 "<< endl;
    }
    if (band3 == 'V')
    {
        cout << "El número ha sido encontrado en la posición " << posicion3<<" del arreglo valores3 "  << endl;
    }
    else{
        cout << "El número no ha sido encontrado en el arreglo valores 3 "<< endl;
    }
   

    return 0;
}
