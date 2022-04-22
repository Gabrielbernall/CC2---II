#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numero,suma = 0;
    for (int i = 0; i < 10; i++){
        cout<<"Numero ["<<i<<"] ",cin>>numero;
        if (numero < 0){
            suma += numero;
        }
    }
    cout<<suma<<endl;

    system("pause");
    return 0;
}