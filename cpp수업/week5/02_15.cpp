#include <iostream>
using namespace std;

int main(){
    cout << "���� �Է� : ";
    int a[5];
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    cout << "�迭 ���� : ";
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
    cout << "\n������ : ";
    for(int i=0;i<5;i++){
        cout << a[i] << "  " ;
    }
}