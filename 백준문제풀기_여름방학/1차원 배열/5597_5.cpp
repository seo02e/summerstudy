#include <iostream>
//#include <vector>
using namespace  std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num[30]={0};
    //vector<int> num(30,0)
    int in;
    while(cin >> in){
        for(int i=0; i<30; i++){
            if(in==i+1) num[i] = in;
            else continue;
        }
    }
    for(int i=0; i<30; i++){
        if(num[i]==0) cout << i+1 <<" ";
    }
}