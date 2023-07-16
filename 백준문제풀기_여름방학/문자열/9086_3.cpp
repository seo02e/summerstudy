#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    string N;
    cin >>T;
    for(int i=0; i<T; i++){
        cin >>N;
        cout << N[0]<< N[N.length()-1]<<endl;
    }

}