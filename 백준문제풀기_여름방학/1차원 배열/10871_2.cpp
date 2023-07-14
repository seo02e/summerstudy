#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T, X;
    cin >> T>>X;
    int *A = new int[T];
    for(int i=0; i<T; i++){
        cin >> A[i];
        if(A[i] < X) cout << A[i] << " ";
        else continue;
    }

}