#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;
    for(int i=1; i<=N; i++){
        for(int j=0; j<i; j++){
            cout <<"*";
        }
        cout <<"\n";
    }
}