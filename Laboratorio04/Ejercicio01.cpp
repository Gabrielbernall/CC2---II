#include <iostream>
#include <string>
using namespace std;

int main(){
    string nombres[3];
    string apellidos[3];
    int edades[3];
    int DNI[3];

    for (int i = 0; i < 3; i++){
        cout << "Nombre ["<<i<<"]: ",getline(cin,nombres[i]);
        cout << "Apellido ["<<i<<"]: ",getline(cin,apellidos[i]);
        cout << "Edad ["<<i<<"]: ",cin>>edades[i];
        cout << "DNI ["<<i<<"]: ",cin>>DNI[i];
    }
    for (int i = 0; i < 3; i++){
        cout << nombres[i] <<' '<<apellidos[i]<<' '<<edades[i]<<' '<<DNI[i]<<endl;

    }
    return 0;
}
