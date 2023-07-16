#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    int count = 0;
    string word;
    while (ss >> word) {
        count++;
    }
    cout << count << endl;
    return 0;
}