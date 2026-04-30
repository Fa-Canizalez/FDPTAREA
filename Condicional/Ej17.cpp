/*Ejercicio #17 nivel dificil IF, ELSE, ELSE IF
Precio de Entrada a un Parque
Un parque cobra diferente según la edad: niños menores de 5 entran gratis, entre 5 y 12 pagan $5, mayores de 12 pagan $10.
*/

#include <iostream>
using namespace std;

int main (){

    int edad;

    cout << endl << "***** COBRO DE ENTRADA A UN PARQUE *****" << endl << endl;
    cout << "Bienvenido al sistema de compra de entradas" << endl << "Para conocer el costo de su entrada por favor ingrese su edad: " << endl << endl;
    cin >> edad;

    if (edad < 5 && edad > 0)
    {
        cout << "Su entrada es gratis :D" << endl;
    }
    else if (edad >= 5 && edad <=12)
    {
        cout << "El costo de su entrada es de $5" << endl;
    }
    else if (edad > 12)
    {
        cout << "El costo de su entrada es de $10" << endl;
    }
    else 
    {
        cout << "Dato invalido" << endl;
    }
    
    return 0;
}