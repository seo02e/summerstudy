#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    while(getline(cin, S)){
        cout << S <<endl;
    }
}