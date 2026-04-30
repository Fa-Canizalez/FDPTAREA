/*Ejercicio #4 nivel medio IF, ELSE, ELSE IF
Calificación Aprobatoria
Solicita una calificación numérica y muestra si el estudiante aprobó o reprobó (mínimo aprobatorio: 60).*/

#include <iostream>
using namespace std;

int main(){

    int nota;

    cout << endl << "QUIRES SABER SI APROBASTE O NO?" << endl << endl;
    cout << "Ingresa tu nota: "<< endl;
    cin >> nota;

    if (nota >=75)
    {
        cout << "FELICIDADES! HAZ APROBADO CON " << nota << " :D" << endl;
    }
    else if (nota < 75 && nota >= 60)
    {
        cout << "Has aprobado con " << nota << ", mejoremos esa nota un poco mas ;)" << endl;
    }
    else 
    {
        cout << "Has reprobado :c" << endl << "Esforzemonos mas la proxima!" << endl;
    }
    return 0;
}