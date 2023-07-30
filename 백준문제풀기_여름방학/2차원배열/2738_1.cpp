#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int N,M;
    cin >> N >> M;
    int NM1[N][M];
    int NM2[N][M];
    for(int i=0;i<N; i++){
        for(int j=0; j<M; j++){
            NM1[i][j]=0;
            NM2[i][j]=0;
        }
    }
    //한 줄 입력 처리...
    string d;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> NM1[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> NM2[i][j];
        }
    }

    //최종 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << NM1[i][j] + NM2[i][j] << " ";
        }
        cout << endl;
    }
}