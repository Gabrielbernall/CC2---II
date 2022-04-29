#include <iostream>
#include <stdlib.h>
using namespace std;

int potencia(int);

int main(){
    int numero;
    cout<<"Digite el numero: ",cin>>numero;

    cout<<potencia(numero);

    cout<<endl;    
    system("pause");
    return 0;
}


int potencia(int n){
    int poten = n * n;
    return poten;
}