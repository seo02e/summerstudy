#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int N,M;
    cin >> N >> M;
    int NM[N][M];
    int NM2[N][M];
    for(int i=0;i<N; i++){
        for(int j=0; j<M; j++){
            NM[i][j]=0;
        }
    }
    //한 줄 입력 처리...
    
    for(int k=0; k<2; k++){
        for(int i=0; i<N; i++){
            for(int j=0; j=M; j++){
                int u;
                cin >> u;
                NM[i][j] += u;
            }
        }
    }


    //최종 출력
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << NM[i][j] << " ";
        }
        cout << endl;
    }
}