#include <iostream>
using namespace std;
int add(int a[], int size, int b[]=nullptr){
    int num=0;
    for(int i=0; i<size;i++){
        num += a[i];
    }
    if(b != nullptr){
        for(int i=0; i<size;i++){
        num += b[i];
        } 
    }
    return num;
}
int main() {
 int a[] = {1, 2, 3, 4, 5};
 int b[] = {6, 7, 8, 9, 10};
 int c = add(a, sizeof(a)/sizeof(int)); //배열 a의 정수를 size 인덱스까지 모두 더한 값 리턴
 int d = add(a, sizeof(a)/sizeof(int), b); //배열 a, b의 정수를 size 인덱스까지 모두 더한 값 리턴
 cout << c << endl; // 15 출력
 cout << d << endl; // 55 출력
}
