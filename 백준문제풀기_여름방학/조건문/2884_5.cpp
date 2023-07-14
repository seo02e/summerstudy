#include <iostream>
using namespace std;
int main(){
    int H,M;
    cin >> H >> M;
    if(M>=45){
        M -= 45;
    }
    else{
        if(H>0) {
            H-=1;
            int num = 45-M;
            M = 60-num;
        }
        else {
            H=23;
            int num = 45-M;
            M = 60-num;
        }
    }
    cout << H << " "<< M << endl;
}

//분과 시를 통일시킨 후 45를 빼고 다시 /, %로 분,시 구분
//음수일때는 24*60을 더해줌