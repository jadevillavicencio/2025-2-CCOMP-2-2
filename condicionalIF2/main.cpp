#include <iostream>

using namespace std;

int main()
{
    char val;
    cout << "Ingrese un caracter por favor: ";
    cin >> val;

    cout << "El caracter ingresado es: " << val << endl;
    int num = static_cast<int>(val);
    cout << "El valor numrico es: " << num << endl;

    /**
     *Escribir un programa que indique si el valor ingresado es una LETRA MAYUSCULA
     */
     if (num >= 65 && num <= 90) {
       cout << "Es una letra mayuscula" << endl;
     }else {
       cout << "No es una letra mayuscula" << endl;
     }
     /**
      * Escribir un programa que indique si el valor ingresado es una
      * LETRA MAYUSCULA o LETRA MINUSCULA
      */
      if( (num >= 65 && num <= 90) || (num >= 97 && num <= 122) {
         cout << "Es una LETRA" << endl;
      } else {
          cout << "NO es una letra" << endl:
      }
      /**
      * Escribir un programa que indique si el valor ingresado es un
      * NUMERO
      */
      if(num >= 48 && num < 57) {
        cout << "Es un NUMERO!!!!! :3"<< endl;
      } else {
          cout << "NO es un numero !!! :c"<< endl;
      }

      return 0;
}
