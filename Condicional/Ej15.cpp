/*Ejercicio #15 nivel dificil IF, ELSE, ELSE IF
Velocidad y Multa
Pide la velocidad de un conductor. Si supera los 60 km/h, se le aplica una multa; si supera los 80 km/h, la multa es mayor.*/

#include <iostream>
using namespace std;

int main () {

    int velocidad;

    cout << endl << "***** MANEJAS CON EXCESO DE VELOCIDAD? *****" << endl << endl;
    cout << "Por favor ingrese la velocidad a la que maneja para saber si es una velocidad adecuada " << endl;
    cin >> velocidad;

    if (velocidad > 60 && velocidad < 81)
    {
        cout << "Manejas con exceso de velocidad, eres acreedor a una multa de 100$" << endl;
    }
    else if (velocidad > 80) 
    {
        cout << "Manejas a una velocidad peligrosa, eres acreedor a una multa de 150$" << endl;
    }
    else
    {
        cout << "Manejas a una velocidad adecuada, no eres acreedor de ninguna multa"<<endl<< "***** SIGUE ASI :D ***** "<< endl;
    }
    return 0;
}