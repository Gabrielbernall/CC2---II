#include <iostream>
using namespace std;

void llenarVector();
void buscarNumero();
void imprimirVector();

int vector[8];

int main(){
    llenarVector();
    buscarNumero();
    imprimirVector();

    return 0;
}

void buscarNumero(){
    int numero;
    cout << "Digite el numero a buscar: ",cin>>numero;
    for (int i = 0; i < 8; i++)
    {
        if (vector[i] != numero )
            vector[i] = 0;        
        else 
            vector[i] = 1;
    }
}

void llenarVector(){
    for (int i = 0; i < 8; i++){
        cout << "Numero ["<<i+1<<"]: ",cin>> vector[i];
    }
}

void imprimirVector(){
    for (int i = 0; i < 8; i++){
        cout << vector[i] << ' ';
    }
}