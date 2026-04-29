#include <iostream>
using namespace std;

int main (){

    float peso;
    int cobro, billetera=500;

    cout << endl << "CALCULADOR DE TARIFA DE ENVIO"<< endl << endl;
    cout << "Cual es el peso de su paquete? " << endl;
    cin >> peso;

    if (peso <= 5 && peso > 0)
    {
        cobro = billetera -5;
        cout << "Su cobro de 5$ se realizo correctamente" <<endl;
        cout << "Su nuevo saldo es de " << cobro << endl;

    }
    else if (peso >= 6 && peso <=10)
    {
        cobro = billetera -10;
        cout << "Su cobro de 10$ se realizo correctamente" <<endl;
        cout << "Su nuevo saldo es de " << cobro << endl;
    }
    else if (peso >10 )
    {
        cobro = billetera -15;
        cout << "Su cobro de 15$ se realizo correctamente" <<endl;
        cout << "Su nuevo saldo es de " << cobro << endl;
    }
    else
    {
        cout << "Datos incorrectos" << endl;
    }
    return 0;
}