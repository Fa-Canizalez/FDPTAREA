/*Ejercicio #19 nivel dificil IF, ELSE, ELSE IF
Tarifa de Luz Eléctrica
Calcula la tarifa según el consumo: menor a 100 kWh, tarifa baja; entre 100 y 200 kWh, tarifa media; más de 200 kWh, tarifa alta.*/

#include <iostream>
using namespace std;

int main (){

    float consumo;

    cout << endl << " *****TARIFA DE LUZ ELECTRICA***** " << endl << endl;
    cout << "Bienvenido al calculador de tarifas de luz" << endl << endl <<"Para conocer su tarifa ingrese su consumo de energia en kWh:" << endl;
    cin >> consumo;

    if (consumo < 100 && consumo > 0)
    {
        float tarifa = (consumo*0.15);
        cout <<"Su consumo de energia es bajo, su tarifa es: $" << tarifa << endl;
    }
    else if (consumo >=100 && consumo <= 200)
    {
        float tarifa = (consumo*0.16);
        cout <<"Su consumo de energia es medio, su tarifa es: $" << tarifa << endl;
    }
    else if (consumo > 200)
    {
        float tarifa = (consumo*0.17);
        cout <<"Su consumo de energia es alto, su tarifa es: $" << tarifa << endl;
    }
    else 
    {
        cout << "Datos invalidos" << endl;
    }
}