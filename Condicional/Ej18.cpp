/*Ejercicio #18 nivel dificil IF, ELSE, ELSE IF
Doble Verificación de Datos
Pide dos contraseñas y verifica si coinciden antes de continuar.
*/

#include <iostream>
using namespace std;

int main (){

    string pass, verifi;

    cout << endl << " *****BIENVENIDO A SU DOBLE VERIFICACION DE DATOS***** " << endl << endl;
    cout << "A continuacion, ingrese una nueva password: " << endl;
    cin >> pass;

    cout <<endl << "Ingrese nuevamente la password para la verificacion de datos:" << endl;
    cin >> verifi;

    if (pass == verifi )
    {
        cout << endl<< "   Verificacion exitosa :D " <<endl<< " ***BIENVENIDO A SU CUENTA*** " << endl;
    }
    else 
    {
        cout << endl<< "Las password no coinciden" << endl << "  ***ACCESO DENEGADO*** " << endl;
    }
    return 0;
}