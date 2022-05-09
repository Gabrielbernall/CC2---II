#include <iostream>

using namespace std;

int edad(int,int,int,int,int,int);
int edad2;
int main(){
    
    int año1,mes1,dia1,año2,mes2,dia2;
    cout<<"Digite la fecha actual "<<endl;
    cout<<"Digite el año: ",cin>>año1;
    cout<<"Digite el mes: ",cin>>mes1;
    cout<<"Digite el dia: ",cin>>dia1;
    cout<<"Digite la fecha de cumpleaños "<<endl;
    cout<<"Digite el año: ",cin>>año2;
    cout<<"Digite el mes: ",cin>>mes2;
    cout<<"Digite el dia: ",cin>>dia2;
    int edadfinal = edad(año1,mes1,dia1,año2,mes2,dia2);
    cout<<edadfinal;

    return 0;
}

int edad(int a1,int m1,int d1,int a2,int m2,int d2){
    if (m2 < m1){
        edad2 = a1 - a2;
    }else if (m2 == m2){
        if (d2 <= d1){
            edad2=a1-a2;
        }
        else{
            edad2=(a1 -a2) -1;
        }
    }else if (m2 > m1){
        edad2 = (a1-a2)-1;
    }
    return edad2;
}    
    



