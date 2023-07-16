#include <iostream>
#include <iomanip>//소수점 관련
#include <vector> //배열관련
#include <cmath> //반올림 round관련
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,max=0;
    double sum=0;
    cin>>N;
    vector<double> sub(N,0);
    for(int i=0; i<N; i++){
        cin >> sub[i];
        if(sub[i]> max) max = sub[i];
    }
    for(int i=0; i<N; i++){
        sub[i] =sub[i]/max*100;
        sum += sub[i];
    }
    double average = static_cast<double>(sum)/N;
    double roundavg = round(average*100)/100; //소수점둘째자리에서 반올림
    cout << fixed << setprecision(2)<< roundavg;
}
//average를 sum/max*100/num으로 구해도 됨.