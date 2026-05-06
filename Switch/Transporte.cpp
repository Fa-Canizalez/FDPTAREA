/*Sistema de Transporte Público
Pide un tipo de transporte (1 = Bus, 2 = Metro, 3 = Taxi) y muestra el costo estimado de un viaje.*/


#include <iostream>
using namespace std;

int main (){

    int transporte;

    cout << " ***** BIENVENIDO ***** " << endl << "En que tipo de transporte desea viajar? "<<endl << endl;
    
    cout << "1. Bus \n";
    cout << "2. Metro \n";
    cout << "3. Taxi \n" << endl;
    cin >> transporte;
    cout << endl;

    switch (transporte)
    {
        case 1:

        cout << "Usted ha escogido viajar en bus\n" << endl;
        cout <<"El costo estimado de su viaje es: $0.20"<< endl;
        break;

        case 2: 

        cout << "Usted ha escogido viajar en metro \n" << endl;
        cout <<"El costo estimado de su viaje es: $3.00"<< endl;
        break;

        case 3:
        
        int distancia;
        cout << "Usted ha escogido viajar en taxi\n" << endl;
        cout << "Que distancia en km va a viajar?\n" ;
        cin >> distancia;

        if (distancia > 0)
        {
        int costo = distancia * 0.50;
        cout <<"El costo estimado de su viaje es: "<< endl;
        cout << "$" << costo ;
        }
        else 
        {
            cout << "Ingrese una distancia valida";
            return 1;
        }
        break;
        
        default:
        cout << "Dato invalido, ingrese un numero del 1 al 3";
        return 1;
    }



    return 0;
}