#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int cont=1,primo=1,d=1;
    while (cont <= 50){
        if (primo % d == 0){
            cout<<primo<<' ';
            cont +=1;
        }
        d=2;
        primo++;
    } 
    d++;
    
    system("pause");
    return 0;
}