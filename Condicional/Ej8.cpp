/*Ejercicio #8 nivel medio IF, ELSE, ELSE IF
Verificación de Usuario y Contraseña
Simula la verificación de un usuario y contraseña predefinidos.*/

#include <iostream>
using namespace std;

int main (){

    string user1, user2, pass1, pass2 ;

    cout << endl << "CREACION DE USUARIO NUEVO" << endl << endl;
    cout << "Ingrese su nombre de usuario: " << endl;
    cin >> user1;
    cout << endl;

    cout << "Ingrese su password: " << endl;
    cin >> pass1;
    cout << endl;

    cout << "Usuario creado con exito :)" << endl<< endl;

    cout << "COMPROBACION DE USUARIO" << endl << endl;
    cout << "Ingrese nuevamente los datos de su cuenta "<<endl;
    cout << "Usuario: " << endl;
    cin >> user2;
    cout << endl;
    cout << "Password: " << endl;
    cin >> pass2;

    if (user1 == user2 && pass1 == pass2)
    {
        cout << "Ingreso exitoso :D!!" << endl;
    }
    else 
    {
        cout << "Usuario o password incorrectos" << endl;
    }

    return 0;
}