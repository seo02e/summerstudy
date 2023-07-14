#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, vnum, val=0;
    cin >> N;
    int *n = new int[N];
    for(int i=0; i<N; i++){
        cin >> n[i];
        
    }
    cin >> vnum;
    for(int i=0; i<N; i++){
        if(n[i]==vnum) val++;
    }
    cout << val;

}