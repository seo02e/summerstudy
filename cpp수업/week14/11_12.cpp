#include <iostream>
#include <algorithm>
using namespace std;
int main(){
 //람다식 완성
 auto method = [](int size, int arr[]){
    sort(arr, arr+size);
 };
 
 int iarr[] = {4, 7, 2, 67, 4, 13, 6};
 method(sizeof(iarr)/sizeof(int), iarr);
 for(auto value : iarr){
 cout<<value<<" ";
 }
 cout<<endl;
 return 0;
}