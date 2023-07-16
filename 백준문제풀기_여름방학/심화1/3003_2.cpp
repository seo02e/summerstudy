#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int *chess = new int[6]{1,1,2,2,2,8};
    int an;
    for(int i=0; i<6; i++){
        cin >> an;
        if(an!=chess[i]) { cout << chess[i]-an<<" "; }
        else { cout << 0 << " "; }
    }

    delete[] chess;

}