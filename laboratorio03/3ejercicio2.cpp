#include <iostream>
#include <stdlib.h>

using namespace std;

bool bisiesto(int);

int main(){
    int año;
    cout<<"Digite el año: ",cin>>año;
    
    cout<<bisiesto(año);

    cout<<endl;
    system("pause");
    return 0;
}

bool bisiesto(int n){
    if (n % 4 != 0 || (n % 100 == 00 && n % 400 != 0))
    {
        return false;
    }
    return true;
}