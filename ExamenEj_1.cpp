#include <iostream>
#include <locale.h>
using namespace std;
#define tam 100

/* 1.	Escriba una función que identifique si dos strings son anagramas o no. 
Un anagrama es una palabra que resulta de la transposición de letras de otra palabra. */

int main(){
	 setlocale (LC_ALL, "spanish");
	 char cadena1[tam];
	 char cadena2[tam];
	 int palabra_1=0,palabra_2 =0;
 
     for(int i=0;i<tam;i++){
	 	cadena1[i]=0;
	 	cadena2[i]=0;
	 }
	 
	 cout<<"1ra Palabra:\n";
	 cin>>cadena1;
	 cout<<"2da Palabra:\n";
	 cin>>cadena2;

	 for(int i = 0; cadena1[i]; i++){
        cadena1[i] = toupper(cadena1[i]);
     }
     for(int i = 0; cadena2[i]; i++){
        cadena2[i] = toupper(cadena2[i]);
     }
	 for(int i=0;i<tam;i++){
	 	palabra_1=palabra_1+cadena1[i];
	 	palabra_2=palabra_2+cadena2[i];
	 }
	 cout<<endl;
	 if(palabra_1==palabra_2){
	 	cout<<"Las palabras introducidas son anagramas\n";
	}
	 else{
	 	cout<<"Las palabras introducidas no son anagramas\n";
	 }
	 return 0;
}
