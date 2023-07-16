#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, val=0;
    bool ti;
    string R;
    cin >>N;
    for(int i=0; i<N; i++){ //단어수
        ti =false;
        cin >> R;
        for(int j=0; j<R.length()-1; j++){ //알파벳수
            if(R[j]==R[j+1]) continue;//바로 다음은 같아도 됨.
            else{
                for(int k= j+1; k<R.length(); k++){
                    if(R[j]==R[k]) ti=true;
                    else continue;
                }
            }
        }
        if(!ti) val++;
    }
    cout << val << endl;
}
