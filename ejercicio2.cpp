#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
    char primernombre[15];
    char apellidomaterno[15];
    char apellidopaterno[15];
    cout<<"Digite su primer nombre: ",cin>>primernombre;
    cout<<"Digite su aepllido paterno: ",cin>>apellidopaterno;
    cout<<"Digite su apellido materno: ",cin>>apellidomaterno;
    
    cout<<"CORREO GENERADO: "<<primernombre[0]<<apellidopaterno<<apellidomaterno[0]<<"@unsa.edu.pe"<<endl;

    system("pause");
    return 0;
}
