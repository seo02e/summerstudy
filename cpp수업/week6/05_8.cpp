#include <iostream>
using namespace std;
class Array{
private:
    int capacity, *arr;
    int size =0;
public:
    Array(int i) : capacity(i), size(0){
        arr = new int[capacity];   };

    void insert(int v){
        if(size >= capacity){  cout << "데이터 " << v << "는 추가할 수 없습니다. 배열이 가득 찼습니다.";  }
        else{
            arr[size] = v;
            size++; }
        };

    void print(){
        cout << "arr = ";
        for(int i=0; i<capacity; i++){
            cout << arr[i]<<"  ";
        }
        cout << endl;
    };

    ~Array(){ delete[] arr; }
};

int main(){
    int count;
    cout << "20215135김준서"<<endl;
    cout << "array size?";
    cin >> count;
    Array array1(count);
    for (int i=0; i<count; i++){
        array1.insert(i+10);
    }
    array1.print();
    array1.insert(34);
    cout << endl;
    return 0;
}