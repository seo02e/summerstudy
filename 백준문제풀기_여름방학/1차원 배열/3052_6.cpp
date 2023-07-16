#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> N(10,0); //처음입력
    vector<int> M(10,0); //42나누고 난 다음
    int val=1; //서로 다른 수의 개수
    for(int i=0; i<10; i++){
        cin >> N[i];
        M[i] = N[i]%42;
    }
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(M[i]==M[j]) break;
            if(j==9) val++;
            else continue;
        }
    }
    cout << val << endl;

}
/*
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> remainders;
    int counter = 0;

    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        int remainder = num % 42;

        if (remainders.insert(remainder).second) {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}
*/