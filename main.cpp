#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo<string> arreglo;
    // agregar 4 string's a arreglo usando insertar_final e insersar_inicio()
    arreglo.insertar_final("Como");
    arreglo.insertar_inicio("Rafael");
    arreglo.insertar_final("Estas?");
    arreglo.insertar_inicio("Hola");

    // mostrar() los elementos de arreglo
    for (size_t i = 0; i < 10; i++)
    {
        cout << arreglo[i] << " ";

    }
    // insertar() el elemento en la posición 2
    arreglo.insertar("Jesus", 2);
    // mostrar los elementos de arreglo
    for (size_t i = 0; i < 10; i++)
    {
        cout << arreglo[i] << " ";

    }
    // eliminar_inicio() y eliminar_final()
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    // eliminar() el elemento de la posición 1
    arreglo.eliminar(1);
    // mostrar() los elementos de arreglo
    for (size_t i = 0; i < 10; i++)
    {
        cout << arreglo[i] << " ";

    }




    // Arreglo<string> myarray;
    // for (size_t i = 0; i < 10; i++)
    // {
    //     myarray.insertar_final("Hola");

    // }
    // myarray.insertar("Adios", 5);
    // myarray.eliminar(5);
    //  for (size_t i = 0; i < 10; i++)
    // {
    //     cout << myarray[i] << " ";

    // }
    

    cout << endl;
    

    
    return 0;
}
