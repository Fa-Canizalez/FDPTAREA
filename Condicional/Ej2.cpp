/*Ejercicio #2 nivel medio IF, ELSE, ELSE IF
Comparación de Números
Pide dos números e indica cuál es mayor, cuál es menor o si son iguales.*/

#include <iostream>
using namespace std;

int main (){

    int num1, num2;

    cout << endl << "QUIERES SABER CUAL NUMERO ES MAYOR O MENOR?" << endl << endl;

    cout << "Ingresa tu primer numero: " << endl;
    cin >> num1;
    cout << endl;

    cout << "Ingresa tu segundo numero: " << endl;
    cin >> num2;
    cout << endl;

    if (num1>num2)
    {
        cout << "El numero " << num1 << " es mayor" << endl << "El numero " << num2 << " es menor" << endl;
    }
    else if (num2>num1)
    {
        cout << "El numero " << num2 << " es mayor " << endl << "El numero " << num1 << " es menor" << endl;
    }
    else 
    {
        cout << "Ambos numeros son iguales " << endl;
    }
    return 0;
}