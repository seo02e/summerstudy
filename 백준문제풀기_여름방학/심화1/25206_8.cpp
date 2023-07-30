#include <iostream>
#include <iomanip>
using namespace std;
//등급이 P인 과목은 sum과 sum2 둘 다 더해주지 않는 게 맞지만, F인 경우에는 sum에는 더해주지 않고 sum2에는 더해야 합니다.
int main(){
    string sub, grd;
    float sum=0.0,  sum2=0.0, score; //과목평점 , 학점의 총합, 학점
    for(int i=0; i<20; i++){
        cin >> sub >> score >> grd;
        if(grd[0]!='F' && grd[0]!='P'){
            if(grd[1]=='+'){
                switch (grd[0]){
                case 'A':
                    sum +=(score*4.5);
                    break;
                case 'B':
                    sum +=(score*3.5);
                    break;
                case 'C':
                    sum +=(score*2.5);
                    break;
                case 'D':
                    sum +=(score*1.5);
                    break;
                default:
                    break;
                }
            }
            else{
                switch (grd[0]){
                case 'A':
                    sum +=(score*4.0);
                    break;
                case 'B':
                    sum +=(score*3.0);
                    break;
                case 'C':
                    sum +=(score*2.0);
                    break;
                case 'D':
                    sum +=(score*1.0);
                    break;
                default:
                    break;
                }
            }
            sum2 += score;
        }
        else if(grd[0]=='F'){
            sum2 += score;
        }
    }
    float val=0.0;
    if (sum2 != 0.0) {
        val = sum / sum2;
    }
    cout << fixed << setprecision(6) << val <<endl;
}