/*Serie de Fibonacci
Muestra los primeros N términos de la serie de Fibonacci utilizando while.*/

#include <iostream>
using namespace std;

int main (){

    int N, terminos = 0, fib = 0, next = 0, result;

    cout << "\n=== SERIE DE FIBONACCI ===\n" << endl;
    cout << "Cuantos terminos de la serie de Fibonacci desea conocer? \n" << endl;
    cout << "Cantidad de terminos: ";
    cin >> N;

    cout << "\nLa serie de Fibonacci hasta el termino " << N << " es: \n" ;

    while (terminos < N)
{
    cout << fib << " ";
    result = fib + (next ++);
    fib = next;
    next = result;

    terminos ++;
}

    return 0;
}