#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int N,U;
    cin >> N;
    U= N-1;
    for(int i=0; i<2*N; i++){
        if(i<N){
            for(int j=0; j<U; j++){
                cout << " ";
            }
            for(int k=0; k<(1+i*2); k++){
                cout << "*";
                if(k==i*2) cout << endl;
            }
            U--;
        }
        else if(i==N) U=1;
        else{
            for(int j=U; j>0; j--){
                cout << " ";
            }
            for(int k=(2*N-1)-(2*U); k>0; k--){
                cout << "*";
                if(k==1) cout << endl;
            }
            U++;
        }
    }

}

