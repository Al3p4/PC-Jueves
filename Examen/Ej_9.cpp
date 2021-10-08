/* 9.	Escriba una función que genere el numero n de la secuencia Fibonacci  */

#include <iostream>
using namespace std;
int fibo(int n){
    if(n == 0 || n == 1)
       return n;
    else
       return fibo(n - 2) + fibo(n - 1);
}

int main(){
    int n=0;
    cout<<"\nFIBONACCI \n\n";
    cout<<"Numero : ";
    cin>> n;
    cout<<fibo(n);
    return 0;
}
