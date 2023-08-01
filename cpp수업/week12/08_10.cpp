#include <iostream>
#include <string>
using namespace std;

class SortedArray {
private:
    int size; // 현재 배열의 크기
    int* p; // 정수 배열에 대한 포인터
    void sort(); // 정수 배열을 오름차순으로 정렬
public:
    SortedArray(); // p는 nullptr로 size는 0으로 초기화
    SortedArray(const SortedArray& arr); // 복사 생성자
    SortedArray(int arr[], int size); // 생성자. 정수 배열과 크기를 전달받아 p에 저장 후 sort() 호출
    ~SortedArray(); // 소멸자
    SortedArray operator+(const SortedArray& b);
    SortedArray& operator=(const SortedArray& b); // 현재 배열에 b 배열을 복사
    void show(const string& name); // 배열의 원소 출력
};

void SortedArray::sort(){ // 정수 배열을 오름차순으로 정렬
    if (p == nullptr || size == 0){ return; } //존재하지 않거나 값이 없으면 종료
    for (int i = 0; i < size-1 ; i++){
        for (int j = 0; j < size - 1-i ; j++){
            if (p[j] > p[j+1]){
                int temp = p[j];  //바꾸기
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}

SortedArray::SortedArray():size(0),p(nullptr){} // p는 nullptr로 size는 0으로 초기화

SortedArray::SortedArray(const SortedArray& arr){ //복사 생성자 정의
    size = arr.size;  
    if (size > 0){
        p = new int[size];
        for (int i = 0; i < size; i++){
            p[i] = arr.p[i];
        }
    } else {
        p = nullptr;
    }
}

SortedArray::SortedArray(int arr[], int size) { //생성자. 정수 배열과 크기를 전달받아 p에 저장 후 sort() 호출
    this->size = size; //매개변수로 받은 배열의 크기를 현재 객체의 사이즈로 설정
    if (size > 0) {
        p = new int[size]; //공간을 동적 할당
        for (int i = 0; i < size; i++) { //배열 값 전부 대입
            p[i] = arr[i];
        }
        sort(); //정렬
    } else { //받은 배열의 크기가 0일 경우 그냥 nullptr로 설정.
        p = nullptr;
    }
}

SortedArray::~SortedArray() {
    delete[] p; //소멸자 정의
}

SortedArray SortedArray::operator+(const SortedArray& b) { //객체를 합쳐서 합친 배열을 정렬후 리턴.
    SortedArray result;
    result.size = size+b.size; //새로만드는 배열의 사이즈를 두 객체의 사이즈 합한 값으로 초기화

    if (result.size>0) { 
        result.p = new int[result.size]; //새 사이즈로 동적 배열 생성
        for (int i = 0; i <size; i++) { result.p[i] = p[i];}

        for (int i = size; i <result.size; i++) { result.p[i] = b.p[i-size]; }

        result.sort(); //이후 정렬
    }
    return result;
}

SortedArray& SortedArray::operator=(const SortedArray& b) { // 현재 배열에 b 배열을 복사
    if (this == &b) {return *this; } //현재 객체와 대입하려는 객체가 같은지 확인 후 같다면 그냥 원본 리턴.
    delete[] p;//이후 소멸자
    size = b.size;  //다르다면 대입하려는 객체의 사이즈로 설정
    if (size > 0) {
        p = new int[size]; //그 사이즈로 동적 할당
        for (int i = 0; i < size; i++) { p[i] = b.p[i]; } //대입
    }
    else {  p = nullptr; } //만약 사이즈가 0일 경우 그냥 nullptr로 설정.

    return *this; 
}

void SortedArray::show(const string& name) { // 배열의 원소 출력
    cout << name << " = { ";
    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    cout << "}"<< endl;
}

int main() {
    int n[] = {2, 20, 6};
    int m[] = {10, 7, 8, 30};

    SortedArray a(n, 3), b(m, 4), c;
    c = a + b;
    cout << "20215135 김준서"<< endl;
    a.show("a");
    b.show("b");
    c.show("c");

    return 0;
}