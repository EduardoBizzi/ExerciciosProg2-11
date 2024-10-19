#include <iostream>
#define N 15
using namespace std;

int procura (int *v){
    for(int i = 0;i < 10;i++){
        if(v[i] == N){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int v[10];
    for(int i = 0;i < 10;i++){
        cin >> v[i];
    }
    if(procura(v) != -1){
        cout << "O valor de N foi encontrado na posicao " << procura(v) << " do vetor v." << endl;
    }
    else{
        cout << procura(v) << endl;
    }

}