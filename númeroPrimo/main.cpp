#include <iostream>

using namespace std;

int main()
{
    /**
    * Implemente un programa que solicite un n�mero por teclado
    * e indique si didcho n�mero es un "n�mero primo".
    */
    //int num;
    //cout << " Ingrese n�mero: ";
    //cin >> num;
    long long n, i=1, d=0;
    cin >> n;
    while (i <= n){
        if (n% i == 0){
                d++;
        }
        i++;
    }
    cout<< (( d == 2) ? "primo" : "no primo");
    /**
    * Implemente un programa que solicite un numro por teclado
    * e imprima los numeros primos menores que dicho numero
    */

}
