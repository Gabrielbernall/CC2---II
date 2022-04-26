#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n;
    cout<<"Digite la altura del triangulo: ",cin>>n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout<<"*"<<' ';
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}