#include <iostream>
using namespace std;

void llenarMatriz();
void imprimirMatriz();
int buscarSuma();


int matriz[3][3];
int filas = (sizeof(matriz)/sizeof(matriz[0]));
int columnas = (sizeof(matriz[0])/sizeof(matriz[0][0]));

int main(){
    llenarMatriz();
    imprimirMatriz();
    cout << buscarSuma();

    return 0;
}


void llenarMatriz(){
    
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Elemento en la fila ["<< i <<"] columna ["<< j <<"]: ",cin>>matriz[i][j];
        }
    }
}

void imprimirMatriz(){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << matriz[i][j] << ' ';
        }
        cout << endl;
    }    
}

int buscarSuma(){
    int sumaM = 0;
    int suma = 0;
    for (int i = 0; i < filas; i++){
        suma = 0;
        for (int j = 0; j < columnas; j++){
            suma += matriz[i][j]; 
        }
        if (suma > sumaM){
            sumaM = suma;
        }    
    }
    return sumaM;
} 