#include <iostream>
using namespace std;
int main(){
    int H, M, T;
    cin >> H>>M>>T;
    int timeset = H*60+M+T;
    H = (timeset/60)%24;
    M = timeset%60;
    cout << H << " "<<M<<endl;
}