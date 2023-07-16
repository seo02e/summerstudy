#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);

    string S;
    getline(cin, S);

    string reversed;
    for (int i = S.length() - 1; i >= 0; i--) {
        reversed += S[i];
    }

    string delimiter = " ";
    size_t pos = 0;
    string word;
    int maxNum = 0;

    while ((pos = reversed.find(delimiter)) != string::npos) {
        word = reversed.substr(0, pos);
        reversed.erase(0, pos + delimiter.length());

        int num = stoi(word);
        maxNum = max(maxNum, num);
    }

    int num = stoi(reversed);
    maxNum = max(maxNum, num);

    cout << maxNum << endl;

    return 0;
}
/*
int main() {
    string num1, num2;
    cin >> num1 >> num2;

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    int reverse_num1 = stoi(num1);
    int reverse_num2 = stoi(num2);

    cout << max(reverse_num1, reverse_num2);

    return 0;
}
*/
/*
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    string S;
    getline(cin, S);
    stringstream ss(S);
    string word;
    int max=0;
    while (ss >> word) {
        int i=0, j=word.length()-1;
        while(i<j){
            int temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        if(max < static_cast<int>(word)) max = static_cast<int>(word);
    }
    cout << max;


}
*/