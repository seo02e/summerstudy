#include <iostream>
using namespace std;

int main(){
    cout << "정수 입력 : ";
    int a[5];
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    cout << "배열 저장 : ";
    for(int i=0;i<5;i++){
        cout  << a[i] << "  " ;
    }
    for(int i=0;i<5;i++){
        for(int j=0; j<5; j++){
            int temp =0;
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\n정렬후 : ";
    for(int i=0;i<5;i++){
        cout << a[i] << "  " ;
    }
}