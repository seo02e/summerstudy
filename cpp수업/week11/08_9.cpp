#include <iostream>
#include <string>
using namespace std;

class Array {
    double *ptr;
    int size;
public:
    Array(int size){
        this->size=size;
        ptr = new double[size];
    };
    ~Array(){
        delete[] ptr;
    };
    void show(string name){
        cout << name << " = { ";
        for(int i=0; i<size;i++){
            cout << ptr[i] << " ";
        }
        cout << "} "<<endl;
    };
    //[] 연산자 중복
    double& operator[](int index) {
        if (index < 0 || index >= size) {
            cout << "인덱스 범위 초과 오류" << endl;
            exit(0);
        }
        return ptr[index];
    }
    //= 연산자 중복
    Array& operator=(const Array& other) {
        if (this == &other) {
            return *this;
        }
        delete[] ptr;
        size = other.size;
        ptr = new double[size];
        for (int i = 0; i < size; i++) {
            ptr[i] = other.ptr[i];
        }
    return *this;
}
};

int main() {
    int size;
    cout << "array size ? ";
    cin >> size;
    Array arr(size), brr(size);
    for (int i = 0; i < size; i++) {
        cout << i << ") input>> ";
        cin >> arr[i];
    }  
    arr.show("arr");
    brr = arr;
    brr.show("brr");
    brr[2] = 34.5;
    brr[4] = 56.3;
    arr.show("arr");
    brr.show("brr");
    return 0;
}

