#include <iostream>
using namespace std;

bool verPrimo(int);

int main(){
    for (int i = 100; i > 1; i--){
        if (verPrimo(i) == true)
        {
            cout << i << ' ';
        }
    }

    return 0;
}

bool verPrimo(int numero){
    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }
    return true;
}