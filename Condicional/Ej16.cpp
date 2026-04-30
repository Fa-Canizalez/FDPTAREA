/*#16 nivel dificil*/
#include <iostream>
using namespace std;

int main (){

    string user, pass, user1, pass1;
    

    cout <<endl <<"CREACION DE USUARIO" << endl << endl;
    cout << "Ingrese el nombre de usuario " << endl;
    cin >> user;
    cout << endl;

    cout << "Ingrese la password " << endl;
    cin >> pass;

    cout << "Usuario creado con exito :D" << endl;
    cout << endl << "INGRESO A LA CUENTA" << endl; 
    cout << "Ingrese su nombre de usuario: "<< endl;
    cin >> user1;

    cout << "Ingrese su password: " << endl;
    cin >> pass1;

    if (user == user1 && pass == pass1)
    {
        cout << "Ingreso exitoso!" << endl;
    }
    else 
    {
        cout << "Intento fallido, intetelo otra vez"<< endl;
        int intentos = 3;
        int restantes = intentos -1;
        cout << "Intentos restantes " << restantes <<endl<< endl;
        cout << "Ingrese los datos nuevamente: " << endl << endl;
        cout << "Usuario: ";
        cin >> user1;
        cout << endl;
        cout << "Password: ";
        cin >> pass1;
        cout << endl;

        if (user == user1 && pass == pass1)
        {
            cout << "Ingreso exitoso!" << endl;


        }
        else {
            cout << "Intento fallido, intetelo otra vez"<< endl;
        int intentos = 2;
        int restantes = intentos -1;
        cout << "Intentos restantes " << restantes << endl << endl;
        cout << "Ingrese los datos nuevamente: " << endl << endl;
        cout << "Usuario: ";
        cin >> user1;
        cout << endl;
        cout << "Password: ";
        cin >> pass1;
        cout << endl;

        if (user == user1 && pass == pass1)
        {
            cout << "Ingreso exitoso!" << endl;


        }
        else {
            cout << "Intento fallido"<< endl;
        int intentos = 1;
        int restantes = intentos -1;
        cout << "Intentos restantes " << restantes << endl << endl;
        cout << "NO HAY MAS INTENTOS, USUARIO BLOQUEADO" << endl << endl;
        }
        }

    }

    return 0;
}
//jiji no pude sin el while
//jiji ya pude 