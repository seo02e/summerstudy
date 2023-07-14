#include <iostream>//굳이 배열 사용 안해도 됨
using namespace std;
int main(){
    int X, kind, sum=0;
    cin >> X >> kind;
    bool value;
    int *pay = new int[kind];
    int *num = new int[kind];
    for(int i=0; i<kind; i++){
        cin >> pay[i] >> num[i];
        sum += pay[i]*num[i];
    }
    if(sum==X) cout << "Yes";
    else cout << "No";

    delete[] pay;
    delete[] num;
    return 0;
}