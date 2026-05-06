/* Calculadora Avanzada
Mejora la calculadora simple agregando ^ para exponenciación y % para módulo.*/
#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int opcion, num1, num2, suma, resta, division, residuo, multiplicacion, potencia;

    cout << endl << " **** BIENVENIDO A LA CALCULADORA *****\n " << endl;

    cout << "A continuacion, seleccione la operacion a realizar: \n " << endl;
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division \n";
    cout << "5. Potencia \n" << endl;
    cin >> opcion;


    switch (opcion)
    {
        case 1:

        cout << "Ingrese su primer numero entero:\n ";
    cin >> num1;

    cout << "\n Ingrese su segundo numero entero: \n";
    cin >> num2;
    
    suma = num1 + num2;

        cout << "La suma de sus dos numeros es: \n";
        cout << suma << endl;
        break;

        case 2: 
        

        cout << "Ingrese su primer numero entero:\n ";
    cin >> num1;

    cout << "\n Ingrese su segundo numero entero: \n";
    cin >> num2;
    resta = num1 - num2;
    
        cout << "La resta de tus dos numeros es: \n";
        cout << resta << endl;
        break;

        case 3: 
    

        cout << "Ingrese su primer numero entero:\n ";
    cin >> num1;

    cout << "\n Ingrese su segundo numero entero: \n";
    cin >> num2;

     multiplicacion = num1 * num2;
    
        cout << "La multiplicacion de sus numeros es: \n";
        cout << multiplicacion << endl;
break;
        case 4:

        cout << "Ingrese su primer numero entero:\n ";
    cin >> num1;

    cout << "\n Ingrese su segundo numero entero: \n";
    cin >> num2;
    
    division = num1 / num2;
        residuo = (num1 % num2);

        cout << "La division de sus dos numeros es: \n";
        cout << division << endl;
        cout << "El residuo de su division es:\n";
        cout << residuo << endl;
break;
        case 5:

        cout << "Ingrese su primer numero entero: \n";
        cin >> num1;

        cout << "Ingrese la cantidad a la que lo quiere elevar: \n";
        cin >> num2;

        potencia = pow(num1, num2);

        cout << "El numero " << num1 << " elevado a la potencia " << num2 << " es igual a: \n";
        cout << potencia << endl;
    break;
    default: 

    cout << "Datos invalidos";
    return 1;
}
cout << "Gracias por utilizar la calculadora avanzada!! ";
    return 0;
}