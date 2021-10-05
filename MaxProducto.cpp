//Ejercicio 1: Producto máximo de dos números

#include <iostream>
#include <vector>
using namespace std;

int  MaxProducto(vector<int> & numero){
    int a,b; 
    a= numero[0];
    b=0;
    int tam = numero.size();

    for(int i=1; i<tam; i++){
        if(numero[i] >= a){
            b = a;
            a = numero[i];
        }
        if (numero[i] > b && numero[i] < a){ 
            b = numero[i];
        }
    }
    return  a*b;
}

int main(){
    vector<int> arreglo;
    int n;
    while (n--){
        int a;
        arreglo.push_back(a);
    }
    arreglo = {1,2,3};
    cout<<MaxProducto(arreglo);
    return 0;
}
