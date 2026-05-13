/*Menú Interactivo
Crea un menú que se repita hasta que el usuario elija la opción de salir.*/

#include <iostream>
using namespace std;

int main (){

    int opcion;

    cout << "\n ***** MENU INTERACTIVO ***** \n" << endl;

    cout << "Por favor, seleccione alguna de las opciones para ordenar un platillo: \n " << endl;

    cout << "   MENU\n";
    cout << "1. Pizza\n";
    cout << "2. Lasagna\n";
    cout << "3. Sushi\n";
    cout << "4. Salir\n" << endl;

    cin >> opcion;

    do
    {
    switch (opcion)
    {
        case 1:
        cout << " *** Buena eleccion!***\nSu pizza llegara en seguida! " << endl;
        break;

        case 2:
        cout << " *** Buena eleccion!***\nSu lasagna llegara en seguida! " << endl;
        break;

        case 3:
        cout << " *** Buena eleccion!***\nSu sushi llegara en seguida! " << endl;
        break;

        default:
        cout << " *** Opcion invalida ***";
        return 1;
        break;
    }
    cout << "\nEliga otro platillo o seleccione salir:\n ";
    cin >> opcion;
    
    if (opcion > 4)
    {
        cout << " *** Opcion invalida ***";
        return 1;
    }
    }
    while (opcion < 4);

cout << "Gracias por usar nuestro menu interactivo :D";
    return 0;
}