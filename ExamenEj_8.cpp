#include <iostream>
#include <cmath>
using namespace std;

/*8. Escriba una función que determine el número de bits requeridos para transformar un numero entero A en un
numero entero B*/

string Dec_Bin(int num){
    string bit;
    while (num != 0){
        if(num%2 == 0){
            bit +="0";
        }else{
            bit +="1";
        }
        num /= 2;
    }
    return bit;
}

int main() {
    int A= 31;
    int B = 14;
    int bits = 0;
    int m ;
    
    string Abit = Dec_Bin(A); cout << A << " "<<Abit <<endl;
    string Bbit = Dec_Bin(B); cout << B << " "<<Bbit <<endl;
    
    bits = Abit.length()-Bbit.length();
    int total_bits = abs(bits);
    
    if (Abit.length() < Bbit.length()){
         m = Abit.length() ;
    }else{
         m = Bbit.length() ;
    }
    for (int i = 0 ; i < m ; i++) {
        if (Abit [i] != Bbit[i]){
            total_bits +=1;
        }
    }cout<<total_bits;
    return 0;
}
