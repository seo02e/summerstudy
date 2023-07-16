#include <iostream>
using namespace std;
int main(){
    string S,R;
    cin >> S;
    R = S;
    for(int i=0; i<S.length(); i++){
        int j=S.length()-(i+1);
        if(i!=j){
            R[i] = S[j];
            R[j] = S[i];
        }
    }
    cout<< (S==R)? 1:0 << '\n';
}