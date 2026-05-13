/*Suma de Números
Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.
*/
#include <iostream>
using namespace std;

int main (){

    int num, suma = 0;

    cout << "\n*** SUMATORIAS ***\n" << endl;
    
    do {
        cout << "Ingrese un numero a sumar: ";
        cin >> num;

        suma = suma + num;
    }
    while (num != 0);

    cout << "La sumatoria total de los numeros ingresados es: " << suma << endl;
    return 0;
}