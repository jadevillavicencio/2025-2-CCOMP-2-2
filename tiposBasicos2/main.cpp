#include <iostream>

using namespace std;

int main()
{
    /**
    Los tipos de datos para manejar ENTEROS son:
    - short (en memoria RAM ocupa 2 bytes)
    - int ~ long (en memoria RAM ocupa 4 bytes)
    - long long (en memoria RAM ocupa 8 bytes)
    */
    //long long val1 = 10;
    //cout << sizeof(val1) << endl;
    short val1 = 65534;
    cout << "el valor es " << val1 << endl;
    val1 = val1 +1;
    cout << "el valor es " << val1 << endl;
    val1 = val1 +1;
    cout << "el valor es " << val1 << endl;
    /**
    SHORT
    2 bytes
    1 byte ~ 8 bits
    2 bytes ~ 16 bits

    2 en binario es -> 010
    3 en binario es -> 011
    4 en binario es -> 100
    10 en binario es -> 1010
    255 en binario -> 11111111
    256 en binario es -> 0000001 0000000
    6535 en binario es -> 11111111 11111111
    */
    return 0;
}
