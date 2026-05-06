/*Zodíaco según el Mes
Solicita un mes de nacimiento y muestra el signo zodiacal correspondiente.*/

#include <iostream>
using namespace std;

int main (){

    int mes, dia;
    cout << "\n ***** ZODIAC ***** \n" << endl;
    cout << "Te interesa conocer tu signo del zodiaco? \n";
    cout << "Selecciona el numero correspondiente a tu mes de nacimiento: \n" << endl;
    cout << "1. Enero\n";
    cout << "2. Febrero\n";
    cout << "3. Marzo\n";
    cout << "4. Abril\n";
    cout << "5. Mayo\n";
    cout << "6. Junio\n";
    cout << "7. Julio\n";
    cout << "8. Agosto\n";
    cout << "9. Septiembre\n";
    cout << "10. Octubre\n";
    cout << "11. Noviembre\n";
    cout << "12. Diciembre\n" << endl;

    cin >> mes;

    switch (mes)
    {
        case 1:

        cout << "Si naciste en enero puedes ser Capricornio o Acuario\n" << endl;
        break;
        case 2:

        cout << "Si naciste en febrero puedes ser Acuario o Piscis\n" << endl;
        break;

        case 3:

        cout << "Si naciste en marzo puedes ser Piscis o Aries\n" << endl;
        break;

        case 4:

        cout << "Si naciste en abril puedes ser Aries o Tauro\n" << endl;
        break;

        case 5:

        cout << "Si naciste en mayo puedes ser Tauro o Geminis\n" << endl;
        break;

        case 6: 

        cout << "Si naciste en junio puedes ser Geminis o Cancer\n" << endl;
        break;
        
        case 7:

        cout << "Si naciste en julio puedes ser Cancer o Leo\n" << endl;
        break;

        case 8:

        cout << "Si naciste en agosto puedes ser Leo o Virgo\n" << endl;
        break;

        case 9:

        cout << "Si naciste en septiembre puedes ser Virgo o Libra\n" << endl;
        break;

        case 10:

        cout << "Si naciste en octubre puedes ser Libra o Escorpio\n" << endl;
        break;

        case 11:

        cout << "Si naciste en noviembre puedes ser Escorpio o Sagitario\n" << endl;
        break;

        case 12:

        cout << "Si naciste en diciembre puedes ser Sagitario o Capricornio\n" << endl;
        break;

        default:

        cout << "No eres un asesino cierto? Solo numeros del 1 al 12";
        return 1;

    }
    return 0;

}