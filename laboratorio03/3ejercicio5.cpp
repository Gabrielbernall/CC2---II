#include <iostream>

using namespace std;

void pedirnumero();
void validarpar(int);
int sumarimpares(int);

int numero,suma=0;

int main(){
    int opcion;

    regresar:
    cout<<"            MENU"<<endl;
    cout<<"1. Introducir valor para 'x' "<<endl;
    cout<<"2. Validar que sea numero par"<<endl;
    cout<<"3. Sumar todos los valores impares desde el 0 hasta el valor de x"<<endl;
    cout<<"4. SALIR"<<endl;
    cout<<"Ocion: ",cin>>opcion;

    switch (opcion)
    {
    case 1: pedirnumero();
        goto regresar;
    case 2: validarpar(numero);
        goto regresar;
    case 3: sumarimpares(numero);
        cout<<suma<<endl;
        goto regresar;
    case 4: break;
    default: "Digite una opcion correcta";
        goto regresar;
        break;
    }
    system("pause");
    return 0;
}

void pedirnumero(){
    cout<<"Digite el numero: ",cin>>numero;
}

void validarpar(int n){
    if (n % 2 == 0){
        cout<<"Es par"<<endl;
    }else
        cout<<"No es par"<<endl;
    
}

int sumarimpares(int n){
    for (int i = 1; i < n; i++){
        suma = suma + i;
    }
    return suma;
}