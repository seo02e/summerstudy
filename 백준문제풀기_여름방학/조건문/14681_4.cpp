#include <iostream>
using namespace std;
int main(){
    int x,y, quadrant;
    cin >> x >> y;
    if(x>0){
        if(y> 0) quadrant = 1;
        else quadrant = 4;
    }
    else if(x<0){
        if(y > 0) quadrant =2;
        else quadrant = 3;
    }
    cout << quadrant << endl;
}