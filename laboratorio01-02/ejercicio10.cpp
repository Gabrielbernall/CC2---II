#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    
    char contraseña[20];
    char contraseña2[20];
    cout<<"CREANDO CONTRASENIA"<<endl;
    cout<<"Digita tu contrasenia: ",cin>>contraseña;
    
    regresar:
    cout<<"Digita para validar: ",cin>>contraseña2;
    if (contraseña2 == contraseña)
    {
        cout<<"contrasenia correcta";
    }else goto regresar;
    
    
    system("pause");
    return 0;
}