#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,M;
    cin >> N >>M;
    int *n = new int[N];
    for(int i=0; i<N; i++){
        n[i] = 0;
    }
    int I,J,K;
    for(int i=0; i<M; i++){
        cin >> I>>J>>K;
        for(int p=I-1; p<J; p++){
            n[p]=K;
        }
    }
    for(int i=0; i<N; i++) {cout << n[i] << " ";}
    delete[] n;
}