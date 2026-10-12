#include <iostream>
#include <limits>

using namespace std;

int validarOpcion()
{
    int opcion;

    while (!(cin >> opcion))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Entrada invalida " << endl;
        cout << "Ingrese una Opcion correcta: "<< endl;
    }

    return opcion;
}
