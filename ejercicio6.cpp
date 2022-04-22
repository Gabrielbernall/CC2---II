#include <iostream>

using namespace std;

int main()
{
    int numero;
    short binario[8];
    regresar:
    cout << "Numero:",cin >> numero;
    if ( numero > 100 && numero < 999 ){
        for (int i = 0; i < 8; i++){
            binario[i] = numero % 2;
            numero /= 2;
    }
        cout << "El numero en binario es :" << endl;

    for (int i = 7; i >= 0; i--){
        cout << binario[i];
    }
    cout << endl; 
    }else goto regresar;

    system("pause");
    return 0;
}