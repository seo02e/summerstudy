#include <iostream>

using namespace std;


int main(){
    int year;
    bool re;
    cin >> year;
    if((year%4 == 0 && year%100 != 0) || year%400 == 0 ){
        re = true;
    }
    else{
        re= false;
    }
    cout << static_cast<int>(re) << endl;
}