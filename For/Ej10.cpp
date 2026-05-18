/*Serie de Fibonacci
Muestra los primeros N términos de la serie de Fibonacci.*/
#include <iostream>
using namespace std;

int main (){

    int num, suma = 0, a = 0, b = 1;
    
    cout << "\nSERIE FIBONACCI\n" << endl;

    cout << "Cuantos terminos de la serie fibonacci desea conocer? ";
    cin >> num;

    for (int i = 1; i <= num; i ++)
    {
        cout << suma << " "; 
        suma = a + b;
        a = b;
        b = suma;
    }

    return 0;
}