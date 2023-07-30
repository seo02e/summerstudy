#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string R="";
    string M[5];
    int maxline =0;
    for(int i=0; i<5; i++){
        cin >> M[i];
        if(M[i].length()>maxline) maxline = M[i].length();
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<maxline; j++){
            R += M[j][i];
        }
    }
    cout << R<<endl;

}