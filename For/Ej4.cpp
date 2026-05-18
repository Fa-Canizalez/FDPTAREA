/*Tabla de Multiplicar
Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.*/
#include <iostream>
using namespace std;

int main (){

    int num, multiplicacion;

    cout << "\n TABLAS DE MULTIPLICAR \n" << endl;
    cout << "Ingresa un numero para conocer su tabla de multiplicar: ";
    cin >> num;

    for (int i=1; i <= 10; i++)
    {
        multiplicacion = i * num;
        cout << i << " * " << num << " = " << multiplicacion << endl;
    }
    return 0;
}