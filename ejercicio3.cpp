#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char cad1[5],cad2[5];
    int hora,min,hora2,min2,res;

    cout<<"Digite la hora: ",cin>>cad1;
    cout<<"Digite los minutos: ",cin>>cad2;

    hora = atoi(cad1);
    min = atoi(cad2);

    cout<<"Digite los minutos a agregar: ",cin>>min2;

    min += min2;

    if (min >= 60)
    {
        hora2 = min / 60;
        hora += hora2;
        res = min % 60;
        min = res;
    }
    
    if (hora >= 12){
        if (min <= 9)
        {
           cout<<hora<<":"<<"0"<<min<<" PM"; 
        }else
            cout<<hora<<":"<<min<<" PM";
    
    }else if (hora >= 0 && hora < 12)
    {
        if (min <= 9)
        {
           cout<<"0"<<hora<<":"<<"0"<<min<<" AM"; 
        }else
            cout<<"0"<<hora<<":"<<min<<" AM";
    }
    cout<<endl;
    system("pause");
    return 0;
}