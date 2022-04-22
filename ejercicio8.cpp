#include <iostream>
#include <iostream>
using namespace std;

int main(){
    int x,numero,suma=0,media;
    cout<<"Ditite la cantidad 'x'de numeros: ",cin>>x;
    for (int i = 0; i < x; i++){
        cout<<"Numero ["<<i<<"]: ",cin>>numero;
        suma += numero; 
    }
    media = suma / x ;
    cout<<"Media: "<<media;
    cout<<endl;
    system("pause");
    return 0;
}