/*Sistema de Puntuación de Videojuegos
Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño.*/

#include <iostream>
using namespace std;

int main (){

    string name;
    int score;

    cout << " \n***** BIENVENIDO AL SISTEMA DE PUNTUACION ***** \n" << endl;
    cout << "  JUGADOR\ningrese su nombre de usuario: " << endl;
    cin >> name;

cout << "Hola " << name << "! para obtener detalles de tu puntuacion ingresa tu cantidad de estrellas obtenidas (1-5):\n" ;
cin >> score;

switch (score)
{
    case 1: 
    cout << "Tu desempeno fue lambentable :c \n" "Sigue practicando!";
    break;

    case 2:
    cout << "Puedes hacerlo mejor que eso " << name <<  "\n" "Sigue practicando!";
    break;

    case 3:
    cout << "No estuviste tan mal\n" "Sigue practicando!";
    break;

    case 4:
    cout << "Lo hiciste muy bien!\n" "Sigue mejorando!";
    break;

    case 5:
    cout << "PUNTUACION PERFECTA\n" "Eres un jugador muy valioso <3 \n(adicto)";
    break;

    default:

    cout << "A menos que seas hacker, puntuacion invalida e imposible \n (numeros del 1-5)";
    return 1;
}

return 0;
}