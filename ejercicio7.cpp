#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n,promedio,nota[3];
    cout<<"Digite el valor de 'n' para el valor de estudiantes: ",cin>>n;
    for (int i = 0; i < n; i++){
        
        int suma=0;
        for (int j = 0; j < 3; j++)
        {
            cout<<"Digite la nota ["<<j<<"] del estudiante ["<<i<<"]: ",cin>>nota[j];
            suma = suma + nota[j];
        }
        promedio = suma / 3;
        cout<<"El promedio del estudiante ["<<i<<"] es: "<<promedio<<endl;
        fflush(stdin);
    }

    system("pause");
    return 0;
}