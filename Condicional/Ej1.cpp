/* Ejercicio #1 de nivel medio IF, ELSE, ELSE IF
Un programa que pida la edad de una persona e indique si es mayor o menor de edad (18 años o más es mayor de edad). */

#include <iostream>
using namespace std;

int main (){

    int edad;

    cout << "ERES MAYOR O MENOR DE EDAD?" << endl << endl;
    cout << "Por favor ingrese su edad: " << endl;
    cin >> edad;

    if (edad >=18) {

        cout << "Tienes " << edad << ", ya eres mayor de edad!! :)" << endl;
    }

    else
    {
        cout << "Tienes " << edad << ", sigues siendo menor de edad :<" << endl;
    }
return 0;
}