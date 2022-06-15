#include <iostream>
#include <string>
using namespace std;


void MenuPrincipal();
void LlenarTienda();

//Funcion Movimiento
bool ModVariablesMov();

//Funciones Principales del Problema

void DarAltaPcto();
void BuscarProducto();
void ModEstockPrecio();

//Variables de la tienda
string nombres[2];
float precios[2];
int stock[2];

//Variables de movimiento
int indice;
string producto = nombres[0];

int main(){
    LlenarTienda();
    MenuPrincipal();
    return 0;
}

void LlenarTienda(){
    cout << "###Llenando Tienda###" << endl;
    for (int i = 0; i < 2; i++){
        cout << "Digite el nombre del producto ["<< i <<"]: ",getline(cin,nombres[i]);
        cout << "Digite el precio del producto: ",cin>>precios[i];
        cout << "Digite la cantidad del producto: ",cin>>stock[i];    
        fflush(stdin);        
    }
    cout << "Tienda Llenada " << endl;
}
bool ModVariablesMov(){
    cout << "Digite el nombre del producto: ",getline(cin,producto);
    for (int i = 0; i < 2; i++)
    {
        if (nombres[i].compare(producto) != 0)
            indice = i; 
            return true;
    }
    return false;
}

void DarAltaPcto(){
    
    fflush(stdin);
     ModVariablesMov();
    if (producto.compare(nombres[indice]) == 0){
        nombres[indice] = "Vacio";
        precios[indice] = 0;
        stock[indice] = 0;
        cout << "El producto se ha dado de alta" << endl;
    }else if (producto.compare(nombres[indice]) != 0)
    {
        cout << "El producto es invalido" << endl;
    }
    
}

void BuscarProducto(){
    fflush(stdin);
    ModVariablesMov();
    for (int i = 0; i < 2; i++){
        if (producto.compare(nombres[i])==0)
        {
            cout << "Producto " << producto <<" encontrado" << endl;
        }
    }
}

void ModEstockPrecio(){
    fflush(stdin);
    bool auxiliar = false;
    string alterna;
    cout << "Digite el nombre del producto a buscar: ",getline(cin,alterna);
    for (int i = 0; i < 2; i++){
        if (alterna.compare(nombres[i])==0)
        {
            cout << "Digite el precio nuevo",cin >> precios[i];
            cout << "Digite el stock: ",cin >> stock[i];
            auxiliar = true;
        }else 
            auxiliar = false;
    }if (auxiliar == false){
        cout << "No se encuentra este producto" << endl;
    }
}

void MenuPrincipal(){
    int opcion;
    bool repetir = true;
    
    do {
        
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Dar de alta un producto" << endl;
        cout << "2. Buscar un producto" << endl;
        cout << "3. Cambiar el precio y stock de un producto" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                DarAltaPcto();
                system("pause>nul"); // Pausa
                break;
                
            case 2:
                BuscarProducto();
                system("pause>nul"); // Pausa
                break;
                
            case 3:                
                ModEstockPrecio();
                system("pause>nul"); // Pausa            
                break;
            
            case 0:
            	repetir = false;
            	break;
        }        
    system("cls");
    } while (repetir);
}