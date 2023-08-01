#include <iostream>
using namespace std;
#include <vector> //벡터 인클루드
int main(){
    int L;
    cout << "array size ?  " ; 
    cin >> L;
    vector<double> v(L);
    cout << "== vector array ==" << endl;
    for(int i=0; i<L; i++){
        cout << "value ? ";
        cin >> v[i];
       
    }
    for(int i=0; i<L; i++){
        cout << "v[" << i <<"] =";
        cout << v[i] << endl;
    }
    cout << "== new array ==" << endl;
    double* ar2 = new double[L];
    for(int i=0; i<L; i++){
        cout << "value ? ";
        cin >> ar2[i];
    }
    for(int i=0; i<L; i++){
        cout << "ar2[" << i <<"] =";
        cout << ar2[i] << endl;
    }
}