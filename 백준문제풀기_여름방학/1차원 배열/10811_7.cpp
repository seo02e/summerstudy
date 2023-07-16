#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N>>M;
    vector<int> ca(N,0);
    for(int i=0; i<N; i++){
        ca[i] = i+1;
    }
    int I,J;
    for(int i=0; i<M; i++){
        cin >> I >>J;
        while(I<J){
            int temp = ca[I-1];
            ca[I-1] = ca[J-1];
            ca[J-1] = temp;
            I++;
            J--;
        }
    }
    for(int i=0; i<N; i++){
        cout << ca[i] <<" ";
    }
    
}