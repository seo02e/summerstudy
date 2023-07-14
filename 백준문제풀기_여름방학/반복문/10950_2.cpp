#include <iostream>//int형 배열을 위해 포인트를 동적생성했으니, delete[]해주기.
using namespace std;
int main(){
    int count;
    cin >> count;
    int *A = new int[count];
    int *B = new int[count];
    int *val = new int[count];
    for(int i=0; i<=count; i++){
        cin >> A[i] >> B[i];
    }
    for(int i=1; i<=count; i++){
        val[i] = A[i]+B[i];
        cout << val[i]<< endl;
    }
    delete[] A;
    delete[] B;
    delete[] val;
}