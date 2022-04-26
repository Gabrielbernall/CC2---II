#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n,suma=0,num,mayor=0,menor=2147483647,media;
    cout<<"Digite n para n numeros: ",cin>>n;
    
    for (int i = 0; i < n; i++){
        cout<<"Numero ? :",cin>>num;
        suma += num;
        if (num > mayor)
        {
            mayor=num;
        }else if (num < menor){
            menor=num;    
        }
    }
    media = suma / n;
    cout<<"el menor es: "<<menor<<endl;
    cout<<"el mayor es: "<<mayor<<endl;
    cout<<"la media es: "<<media<<endl;


    system("pause");
    return 0;
}