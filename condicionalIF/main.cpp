#include <iostream>

using namespace std;

int main()
{
    /**
    * CONDICIONAL IF
    *
       if (CONDICION){
        // SENTENCIA A. se ejecuta si la condici�n es verdadera.
       } else {
        // SENTENCIA B. se ejecuts si la condici�n es falsa.
    * OPERADORES L�GICOS
      > mayor que
      < menor que
      >= mayor o igual que
      <= menor o igual que
      == id�ntico a
      != diferente a
    * OPERADORES L�GICOS
      && - and
      || - or
      !  - negaci�n
      Ejm a=10, b=5
            (a > 5) -> true
            (a < 3) -> false
            (a == 8) -> false
            (a != 5) -> true
            (a >= 10 && b < 10) -> true
            (a < 6 || b == 5) -> true
    */
    int a = 2;
    int b = 5;

    if(a > 5){
        cout << "El numero"<< a << "es mayor que 5"<<endl;
    }
    return 0;
}
