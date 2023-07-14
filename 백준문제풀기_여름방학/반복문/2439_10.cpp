#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    for(int i=1; i<T+1; i++){
        for(int j=T-i; j>0; j--){
            cout <<" ";
        }
        for(int k=0; k<i; k++){
            cout<<"*";
        }
        cout << "\n";
    }
}

/*
    for (int i = 1; i <= T; i++) {
        cout << string(T - i, ' ');
        cout << string(i, '*') << "\n";
    }
*/