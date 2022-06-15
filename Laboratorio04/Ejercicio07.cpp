#include <iostream>

using namespace std;

//Funciones para llenar los datos necesarios

void getInfo(int*,int*);//Pidiendo las dimensiones para las matrices
void llenarMaAux(int**,int,int);
void llenarMaPri(int**,int,int);
void printMatriz(int**,int,int);

//Funciones que pide el problema

void menu(int**,int**,int,int);
void movFiAr(int**,int**,int,int);
void movFiAb(int**,int**,int,int);
void movCoIz(int**,int**,int,int);
void movCoDe(int**,int**,int,int);


int main(){
    int filas = 0;
    int columnas = 0;
    
    getInfo(&filas,&columnas);
    
    
    int ** matrizAux = new int*[filas];
    for (int i = 0; i < filas; i++){
        matrizAux[i] = new int[columnas]; 
    }
    
    int ** matrizPri = new int*[filas];
        for (int i = 0; i < filas; i++){
        matrizPri[i] = new int[columnas]; 
    }

    llenarMaAux(matrizAux,filas,columnas);    
    printMatriz(matrizAux,filas,columnas);
    llenarMaPri(matrizPri,filas,columnas);
    printMatriz(matrizPri,filas,columnas);

    menu(matrizPri,matrizAux,filas,columnas);
    
    return 0;
}

void getInfo(int* _filas,int* _columnas){
    cout << "Digita el numero de filas: ", cin >> *_filas;
    cout << "Digita el numero de columnas: ", cin >> *_columnas;
}

void llenarMaAux(int **matriz,int filas,int columnas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            matriz[i][j]=0;       
        }        
    }
}

void llenarMaPri(int **matriz,int filas,int columnas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Digite el numero en la fila ["<<i<<"] columna ["<< j <<"]: ",cin>>matriz[i][j];       
        }        
        cout << endl;
    }
}

void printMatriz(int **matriz,int filas, int columnas){
       for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                cout << matriz[i][j] << ' ';       
        }        
        cout << endl;
    }
}

void menu(int **matriz,int **matrizAux,int filas,int columnas){
    int opcion;
    bool repetir = true;
    
    do {
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Mover fila hacia arriba" << endl;
        cout << "2. Mover fila hacia abajo" << endl;
        cout << "3. Mover columna a la izquierda" << endl;
        cout << "4. Mover columna a la derecha" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:               
                movFiAr(matriz,matrizAux,filas,columnas);
                system("pause>nul"); // Pausa
                break;
                
            case 2:                
                movFiAb(matriz,matrizAux,filas,columnas);
                system("pause>nul"); // Pausa
                break;
                
            case 3:
                movCoIz(matriz,matrizAux,filas,columnas);               
                system("pause>nul"); // Pausa            
                break;
                
            case 4:               
                movCoDe(matriz,matrizAux,filas,columnas);
                system("pause>nul"); // Pausa                
                break;
            
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);

}

void movFiAr(int **matriz,int **matrizAux,int filas,int columnas){
    int _filamov;
    cout << "Digite el Nro de la fila a mover: ",cin >> _filamov;
    _filamov --;
    if (_filamov > 0 || _filamov < filas){
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                if (_filamov == i){
                    matrizAux[i][j] = matriz[i][j];
                    matriz[i][j] = matriz[i-1][j];
                    matriz[i-1][j] = matrizAux[i][j];
                }
            }
        }
        printMatriz(matriz,filas,columnas);
    }
}
void movFiAb(int **matriz,int **matrizAux,int filas,int columnas){
    int _filamov;
    cout << "Digite el Nro de la fila a mover: ",cin >> _filamov;
    _filamov --; 
    if (_filamov > 0 || _filamov < filas){
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                if (_filamov == i){
                    matrizAux[i][j] = matriz[i][j];
                    matriz[i][j] = matriz[i+1][j];
                    matriz[i+1][j] = matrizAux[i][j];
                }
            }
        }
        printMatriz(matriz,filas,columnas);
    }
}
void movCoIz(int **matriz,int **matrizAux,int filas,int columnas){
    int _colmov;
    cout << "Digite el Nro de la columna a mover: ",cin >> _colmov;
    _colmov --;
    if (_colmov > 0 || _colmov < filas){
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                if (_colmov == j){
                    matrizAux[i][j] = matriz[i][j];
                    matriz[i][j] = matriz[i][j-1];
                    matriz[i][j-1] = matrizAux[i][j];
                }
            }
        }
    printMatriz(matriz,filas,columnas);
    }
}
void movCoDe(int **matriz,int **matrizAux,int filas,int columnas){
    int _colmov;
    cout << "Digite el Nro de la columna a mover: ",cin >> _colmov;
    _colmov --;
    if (_colmov > 0 || _colmov < filas){
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                if (_colmov == j){
                    matrizAux[i][j] = matriz[i][j];
                    matriz[i][j] = matriz[i][j+1];
                    matriz[i][j+1] = matrizAux[i][j];
                }
            }
        }
    printMatriz(matriz,filas,columnas);
    }
}