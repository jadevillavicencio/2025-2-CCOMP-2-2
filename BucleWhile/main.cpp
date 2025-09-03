#include <iostream>

using namespace std;

int main()
{
    /**
    * BUCLE WHILE
    *       while(CONDICION) {
                INSTRUCCIONES1
                INSTRUCCIONES2
                ...
                INSTRUCCIONESN
    *           }
    */
    int i = 1;
    while ( i <= 10) {
        cout << i << endl;
        i = i + 1;
    }
    //al no poner las llaves es un bucle de 1 1 1 1 1 1 1 porque solo ejecuta al cout << i << endl;
    i = 9;
    while (i>= 1) {
        cout << i << endl;
        i = i -1;
    }
    i = 1;
    while (i < 100) {
        if (i % 3 == 0)
        cout << i << " ";//
        i = i + 1;

    }
    return 0;
}
