#include <iostream>
#include <vector>

using namespace std;

// busqueda de una matriz 2D

bool busqueaMatriz2D(vector<vector<int> > matriz, int b){
    if(matriz.empty()){
        return false;
    }
    int m = matriz.size();
    int n = matriz[0].size(); 
    int begin = 0;
    int end = m*n-1;
    while(begin <= end){
        int mid = (begin+ end) / 2;
        int row = mid / n;
        int col = mid % n;
        if(matriz[row][col] == b){
            return true;
        }
        else if(matriz[row][col] > b){
            end = mid - 1;
        }
        else if(matriz[row][col] < b){
            begin = mid + 1;
        }
    }
    return false;
}

int main (){
    vector<vector<int> > matriz ;
    matriz = {{1, 3, 5},
             {7, 9 ,11,},
             {13, 15, 17}};
    int b = 7;     
    cout<<busqueaMatriz2D(matriz , b);
    cout<<endl;
    int c = 12;
    cout<<busqueaMatriz2D(matriz , c);
    
}
