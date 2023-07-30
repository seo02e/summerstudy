#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T[9][9]; //배열 저장할 공간
    int max=0; //가장 큰 값을 저장할 공간
    int I=0,J=0; //큰값이 있는 인덱스
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
    
            cin >> T[i][j];
            if(T[i][j]>max){
                max = T[i][j];
                I=i;
                J=j;
            }
        }
    }
    cout << T[I][J] << '\n' << I+1 << " " << J+1 << endl;

}