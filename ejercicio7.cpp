#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Digite el primer numero entero: ",cin>>num1;
    cout<<"Digite el segundo numero entero: ",cin>>num2;

    if (num1 % num2 == 0){
        cout<<"El numero 2 es divisor del numero 1";
    }else if (num2 % num1 == 0)
    {
        cout<<"El numero 1 es divisor del numero 2";
    }else
        cout<<"No son divisores entre si";
    
    cout<<endl;
    system("pause");
    return 0;
}