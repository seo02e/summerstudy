#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin >> N>>M;
    int *n = new int[N];
    for(int i=0; i<N; i++){
        n[i] = i+1;
    }
    int I,J;
    for(int i=0; i<M; i++){
        cin >> I >>J;
        if(I!=J){
            int temp = n[J-1];
            n[J-1] = n[I-1];
            n[I-1] = temp;
        }
        else continue;
    }
    for(int i=0; i<N; i++){
        cout << n[i] << " ";
    }
    delete[] n;
}