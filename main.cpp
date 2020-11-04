#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo<int> myarray;
    for (size_t i = 0; i < 10; i++)
    {
        myarray.insertar_final(i);

    }
    myarray.insertar(100, 5);
    myarray.eliminar(5);
     for (size_t i = 0; i < 10; i++)
    {
        cout << myarray[i] << " ";

    }
    

    cout << endl;
    

    
    return 0;
}
