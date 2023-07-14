#include <iostream>
using namespace std;
int main(){
    int x,y,z,score;
    cin >> x>>y>>z;
    if( x==y && y==z){
        score = 10000+x*1000;
    }
    else if((x==y)||(z==x)){
        int num = (x == y) ? x : z;
        score = 1000 + num * 100;
    }
    else{
        int max, min;
        max = (x>y) ? ( (x>z) ? x:z ) : ( (y>z) ? y:z );
        score = max*100;
    }
    cout << score << endl;


}