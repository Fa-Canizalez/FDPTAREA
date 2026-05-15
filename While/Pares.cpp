/*Suma de Números Pares
Pide un número N al usuario y usa while para calcular la suma de los números pares desde 1 hasta N.*/

#include <iostream>
using namespace std;

int main (){

    int num, par = 0, suma = 0;

    cout << "\n BIENVENIDO \n" << endl;
    cout << "Por favor, ingrese un numero entero: ";
    cin >> num; 

    while (par <= num)
    
        if (par % 2 == 0)
        {
            suma = suma + par;
            par ++;
            
        }
        else 
        {
            par ++;
        }
    cout << suma;

    return 0;
}
