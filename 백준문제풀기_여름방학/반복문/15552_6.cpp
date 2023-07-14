#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    int *A = new int[T];
    int *B = new int[T];
    int *val = new int[T];
    for(int i=0; i<T; i++){
        cin >> A[i]>> B[i];
        val[i] = A[i]+B[i];
    }
    for(int i=0; i<T; i++){
        cout << val[i] << "\n";
    }
    delete[] A;
    delete[] B;
    delete[] val;
}