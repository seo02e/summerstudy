#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string sub, grd;
    float sum=0.0,  sum2=0.0, score;
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
    }
    float val=0.0;
    if (sum2 != 0.0) {
        val = sum / sum2;
    }
    cout << fixed << setprecision(6) << val <<endl;
}