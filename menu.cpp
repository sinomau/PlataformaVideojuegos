#include <iostream>
#include "menu.h"
#include "utilidades.h"


using namespace std;



Menu::Menu() {
    opcion = 0;
}

void Menu::menuPrincipal() {
    do {
        limpiarPantalla();
        cout << "\n=== MENU PRINCIPAL ===" << endl;
        cout << "1. Juegos" << endl;
        cout << "2. Usuarios" << endl;
        cout << "3. Desarrolladores" << endl;
        cout << "4. Compras" << endl;
        cout << "5. Resenias" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        opcion = validarOpcion();

        switch (opcion) {
        case 1:
            menuJuegos();
            break;
        case 2:
            menuUsuarios();
            break;
        case 3:
            menuDesarrolladores();
            break;
        case 4:
            menuCompras();
            break;
        case 5:
            menuResenias();
            break;
        case 0:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion incorrecta." << endl;
            system("pause");

        }

    } while (opcion != 0);
}


void Menu::menuJuegos() {
    int opcionJuegos;

    do {
        limpiarPantalla();
        cout << "\n=== MENU JUEGOS ===" << endl;
        cout << "1. Agregar juego" << endl;
        cout << "2. Listar juegos" << endl;
        cout << "3. Buscar juego por ID" << endl;
        cout << "4. Modificar juego" << endl;
        cout << "5. Eliminar juego" << endl;
        cout << "0. Volver al menu principal" << endl;
        cout << "Opcion: ";
        opcionJuegos = validarOpcion();

        switch (opcionJuegos) {
        case 1:
            // Agregar juego
            break;
        case 2:
            // Listar juegos
            break;
        case 3:
            // Buscar juego
            break;
        case 4:
            // Modificar juego
            break;
        case 5:
            // Eliminar juego
            break;
        case 0:
            break;
        default:
            cout << "Opcion incorrecta." << endl;
        }

    } while (opcionJuegos != 0);
}

void Menu::menuUsuarios()
{
    int opcionUsuarios;

    do
    {
        limpiarPantalla();

        cout << "\n=== MENU USUARIOS ===" << endl;
        cout << "1. Registrar usuario" << endl;
        cout << "2. Listar usuarios" << endl;
        cout << "3. Buscar usuario por ID" << endl;
        cout << "4. Modificar usuario" << endl;
        cout << "5. Eliminar usuario" << endl;
        cout << "0. Volver al menu principal" << endl;
        cout << "Opcion: ";
        opcionUsuarios = validarOpcion();

        switch (opcionUsuarios)
        {
        case 1:
            cout << "Registrar usuario" << endl;
            system("pause");
            break;

        case 2:
            cout << "Listar usuarios" << endl;
            system("pause");
            break;

        case 3:
            cout << "Buscar usuario por ID" << endl;
            system("pause");
            break;

        case 4:
            cout << "Modificar usuario" << endl;
            system("pause");
            break;

        case 5:
            cout << "Eliminar usuario" << endl;
            system("pause");
            break;

        case 0:
            break;

        default:
            cout << "Opcion incorrecta" << endl;
            system("pause");
            break;
        }

    } while (opcionUsuarios != 0);
}

void Menu::menuDesarrolladores()
{
    int opcionDesarrolladores;

    do
    {
        limpiarPantalla();

        cout << "\n=== MENU DESARROLLADORES ===" << endl;
        cout << "1. Registrar desarrollador" << endl;
        cout << "2. Listar desarrolladores" << endl;
        cout << "3. Buscar desarrollador por ID" << endl;
        cout << "4. Modificar desarrollador" << endl;
        cout << "5. Eliminar desarrollador" << endl;
        cout << "0. Volver al menu principal" << endl;
        cout << "Opcion: ";
        opcionDesarrolladores = validarOpcion();

        switch (opcionDesarrolladores)
        {
        case 1:
            cout << "Registrar desarrollador" << endl;
            system("pause");
            break;

        case 2:
            cout << "Listar desarrolladores" << endl;
            system("pause");
            break;

        case 3:
            cout << "Buscar desarrollador por ID" << endl;
            system("pause");
            break;

        case 4:
            cout << "Modificar desarrollador" << endl;
            system("pause");
            break;

        case 5:
            cout << "Eliminar desarrollador" << endl;
            system("pause");
            break;

        case 0:
            break;

        default:
            cout << "Opcion incorrecta" << endl;
            system("pause");
            break;
        }

    } while (opcionDesarrolladores != 0);
}

void Menu::menuCategorias()
{
    int opcionCategorias;

    do
    {
        limpiarPantalla();

        cout << "\n=== MENU CATEGORIAS ===" << endl;
        cout << "1. Registrar categoria" << endl;
        cout << "2. Listar categorias" << endl;
        cout << "3. Buscar categoria por ID" << endl;
        cout << "4. Modificar categoria" << endl;
        cout << "5. Eliminar categoria" << endl;
        cout << "0. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        opcionCategorias = validarOpcion();

        switch (opcionCategorias)
        {
        case 1:
            cout << "Registrar categoria" << endl;
            system("pause");
            break;
        case 2:
            cout << "Listar categorias" << endl;
            system("pause");
            break;
        case 3:
            cout << "Buscar categoria" << endl;
            system("pause");
            break;
        case 4:
            cout << "Modificar categoria" << endl;
            system("pause");
            break;
        case 5:
            cout << "Eliminar categoria" << endl;
            system("pause");
            break;
        case 0:
            break;
        default:
            cout << "Opcion incorrecta" << endl;
            system("pause");
            break;
        }

    } while (opcionCategorias != 0);
}

void Menu::menuCompras()
{
    int opcionCompras;

    do
    {
        limpiarPantalla();

        cout << "\n=== MENU COMPRAS ===" << endl;
        cout << "1. Registrar compra" << endl;
        cout << "2. Listar compras" << endl;
        cout << "3. Buscar compra por ID" << endl;
        cout << "4. Listar compras de un usuario" << endl;
        cout << "0. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        opcionCompras = validarOpcion();


        switch (opcionCompras)
        {
        case 1:
            cout << "Registrar compra" << endl;
            system("pause");
            break;
        case 2:
            cout << "Listar compras" << endl;
            system("pause");
            break;
        case 3:
            cout << "Buscar compra" << endl;
            system("pause");
            break;
        case 4:
            cout << "Listar compras de un usuario" << endl;
            system("pause");
            break;
        case 0:
            break;
        default:
            cout << "Opcion incorrecta" << endl;
            system("pause");
            break;
        }

    } while (opcionCompras != 0);
}

void Menu::menuResenias()
{
    int opcionResenias;

    do
    {
        limpiarPantalla();

        cout << "\n=== MENU RESENIAS ===" << endl;
        cout << "1. Registrar resenia" << endl;
        cout << "2. Listar resenias" << endl;
        cout << "3. Buscar resenia por ID" << endl;
        cout << "4. Listar resenias de un juego" << endl;
        cout << "5. Eliminar resenia" << endl;
        cout << "0. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        opcionResenias = validarOpcion();

        switch (opcionResenias)
        {
        case 1:
            cout << "Registrar resenia" << endl;
            system("pause");
            break;
        case 2:
            cout << "Listar resenias" << endl;
            system("pause");
            break;
        case 3:
            cout << "Buscar resenia" << endl;
            system("pause");
            break;
        case 4:
            cout << "Listar resenias de un juego" << endl;
            system("pause");
            break;
        case 5:
            cout << "Eliminar resenia" << endl;
            system("pause");
            break;
        case 0:
            break;
        default:
            cout << "Opcion incorrecta" << endl;
            system("pause");
            break;
        }

    } while (opcionResenias != 0);
}
