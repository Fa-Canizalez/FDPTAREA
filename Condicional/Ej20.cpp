/*Ejercicio #20 nivel dificil IF, ELSE, ELSE IF
Sistema de Calificación de Conducción
Un programa debe calificar el estado de un conductor según su edad, número de infracciones y años de experiencia.*/

#include <iostream>
using namespace std;

int main (){

    int edad, infracciones, years;
    int nota = 0;

    cout << endl << " ***** BIENVENIDO AL SISTEMA DE CALIFICACION DE CONDUCTORES ***** "<< endl << endl;
    cout << "SOBRE EL SISTEMA: " << endl;
    cout << "En este sistema se le asignara una nota de 3, 7 o 10 de acuerdo a los parametros de cada condicion, por cada dato proporcionado, tome en cuenta que hay respuestas que restan puntos. " << endl;
    cout << "Para conocer su calificacion por favor ingrese los siguientes datos: " << endl;
    cout << "Cual es su edad? " << endl;
    cin >> edad;

    if (edad >= 15 && edad < 18) nota +=3;
    else if (edad >= 18 && edad < 30) nota +=7;
    else if (edad >=30 && edad < 80) nota +=10;
    else
    {
        nota +=-3;
        cout << "Edad inadecuada para manejar" << endl << endl;
    }
    cout << "Cuantas infracciones tiene? " << endl;
    cin >> infracciones;

    if (infracciones == 0) nota +=10;
    else if (infracciones > 0 && infracciones < 3) nota +=7;
    else if (infracciones == 3) nota +=3;
    else 
    {
        nota +=-10;
        cout << "Licencia removida" << endl << endl;
    }

    cout << "Cuantos years lleva manejando? " << endl;
    cin >> years;

    if (years == 0) nota +=3;
    else if (years >= 1 && years < 10) nota +=7;
    else if (years > 10) nota +=10;
    
    if (years > (edad-15)) 
    {
        nota +=-10;
        cout << "Dato invalido" << endl << "No maneje sin licencia" <<endl << endl;
}

    
    cout << "Su calificacion final es: " << nota << endl;

    if (nota == 30)
    {
        cout << "Es conductor excelente, felicidades :D" << endl;
    }
    else if (nota < 30 && nota >= 9)
    {
        cout << "Es un buen conductor" << endl;
    }
    else 
    {
        cout << "Donde compro su licencia? Es un conductor peligroso" << endl;
    }
    return 0;
}