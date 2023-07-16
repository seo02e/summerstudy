#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, sum=0;
    string an;
    cin >> N>>an;
    for(char c : an){
        sum += (c - '0');
    }
    cout << sum;
}