#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n;
    cout<<"Numero?: ",cin>>n;

    for (int i = 1; i <= n; i++){
        cout<<n*i<<' ';
    }
    
    cout<<endl;
    system("pause");
    return 0;
}