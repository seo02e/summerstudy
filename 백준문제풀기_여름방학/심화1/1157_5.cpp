#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string word;
    cin >> word;
    vector<int> count(26, 0);
    for (char ch : word) { //문자열 크기 비교 후, 알파벳위치인덱스++;
        if (ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            count[ch - 'A']++;
        }
    }
    int maxCount = *max_element(count.begin(), count.end());
    int maxIndex = -1;
    bool isMultiple = false;
    for (int i = 0; i < 26; i++) {
        if (count[i] == maxCount) {
            if (maxIndex != -1) {
                isMultiple = true;
                break;
            }
            maxIndex = i;
        }
    }
    if (isMultiple) {
        cout << "?" << endl;
    } else {
        char result = 'A' + maxIndex;
        cout << result << endl;
    }

    return 0;
}
/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string R;
    cin >> R;
    vector<int> val(26, 0);
    int max = 0;
    bool isMultipleMax = false;

    for (char c : R) {
        if(c>='a'){
            c-='a'-'A';
        }
        int num = c - 'A';
        val[num]++;
        if (val[num] > val[max]) {
            max = num;
            isMultipleMax = false;
        } else if (val[num] == val[max]&& num != max) {
            isMultipleMax = true;
        }
    }

    if (isMultipleMax) {
        cout << "?" << endl;
    } else {
        cout << static_cast<char>(max + 'A') << endl;
    }

    return 0;
}
*/

/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    string R;
    bool o=false;
    cin >> R;
    int *val = new int[26];
    int max=0;  //인덱스번호
    for(int i=0; i<26; i++){
        val[i] = 0;
    }
    for(int i=0; i<R.length(); i++){
        int num = static_cast<int>(R[i]);
        if(num>=97) num -= 97;
        else num -=65;
        val[num]++;
        if(val[num] > val[max]) max = num;
    }
    for(int i=0; i<R.length(); i++){
        if(val[max]==val[i] && max!=i) {
            cout << "?" << endl; 
            o=true;
            break;
        }
        else continue;
    }
    if(o==false){
        cout <<static_cast<char>(max+65)  << '\n';
    }
    delete[] val;
    return 0;
}
*/