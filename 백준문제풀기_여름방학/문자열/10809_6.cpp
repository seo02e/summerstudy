#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //---------------------
    string S;
    cin >> S;
    int n[26];
    fill(n, n+26, -1); //같은 값으로 초기화 (처음, 끝, 값);
    for(int i =0; i<S.length(); i++){
        if(n[(static_cast<int>(S[i])-97)]==-1){
            n[(static_cast<int>(S[i])-97)]=i;
        }
    }
    for(int i=0; i<26; i++){
        cout << n[i] << " ";
    }
    

}