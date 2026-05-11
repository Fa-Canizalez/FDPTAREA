/*Cuenta Regresiva
Solicita un número y muestra una cuenta regresiva hasta 0 */
#include <iostream>
using namespace std;

int main (){


    int cuenta;

    cout << " \nCUENTAS REGRESIVAS\n"<< endl;
    cout << "Ingresa un numero para iniciar con su cuenta regresiva:\n ";
    cin >> cuenta;
    //ciclo while
    while (cuenta >= 0) {
        cout << "Cuenta regresiva: " << cuenta << endl;
        cuenta --; 
    }
    return 0;
}