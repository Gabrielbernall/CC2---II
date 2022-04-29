#include <iostream>
#include <stdlib.h>

using namespace std;

bool primo(int);
void printprim(int);

int main(){
    int numero,prim;
    cout<<"digite el numero: ",cin>>numero;
    printprim(numero);

    cout<<endl;
    system ("pause");
    return 0;
}

bool primo(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;   
}
void printprim(int n){
    cout<<2<<' ';
    for (int i = 3; i < n; i++){
        if (primo(i) == 1){
            cout<<i<<' ';
        }
    }
}