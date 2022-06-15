#include <iostream>
#include <time.h>

using namespace std;

void llenarMatriz();
void printMatriz();
void printSumaFP();

int matriz[5][3];

int main(){
    llenarMatriz();
    printMatriz();
    printSumaFP();
    return 0;
}

void llenarMatriz(){
    srand(time(NULL));
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 50;
        }   
    }
    cout << "Matriz llenada" << endl;
}

void printMatriz(){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << ' ';
        }   
        cout << endl;
    }
    cout << endl;
}

void printSumaFP(){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || i % 2 == 0)
            {
                cout << matriz[i][j] << ' ';
            }
        }   
        cout << endl;
    }
}