#include <iostream>
using namespace std;

struct articulo{
    char codigo[5];
    char descripcion[30];
    float precioUnitario;
    int stock;
    };

void cargarRegistro (articulo articulos[5]);
void mostrarRegistro (articulo articulos[5]);

int main(){
articulo articulos[5];

cargarRegistro(articulos);

mostrarRegistro(articulos);

 return 0;
}

void cargarRegistro(articulo articulos[5]){
int x;

for(x=0;x<5;x++){
    cout<<"Codigo articulo: ";
    cin>>articulos[x].codigo;
    cout<<"Descripcion: ";
    cin>>articulos[x].descripcion;
    cout<<"Precio unitario: $";
    cin>>articulos[x].precioUnitario;
    cout<<"Stock: ";
    cin>>articulos[x].stock;
    }
}

void mostrarRegistro (articulo articulos[5]){
int x;

for(x=0;x<5;x++){
    cout<<"ARTICULO "<<x+1<<endl;
    cout<<"---------"<<endl;
    cout<<"Codigo articulo: ";
    cout<<articulos[x].codigo<<endl;
    cout<<"Descripcion: ";
    cout<<articulos[x].descripcion<<endl;
    cout<<"Precio unitario: $";
    cout<<articulos[x].precioUnitario<<endl;
    cout<<"Stock: ";
    cout<<articulos[x].stock<<endl;
    }
}
