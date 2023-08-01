#include <iostream>
#include <string>
using namespace std;

class SortedArray {
private:
    int size; // ���� �迭�� ũ��
    int* p; // ���� �迭�� ���� ������
    void sort(); // ���� �迭�� ������������ ����
public:
    SortedArray(); // p�� nullptr�� size�� 0���� �ʱ�ȭ
    SortedArray(const SortedArray& arr); // ���� ������
    SortedArray(int arr[], int size); // ������. ���� �迭�� ũ�⸦ ���޹޾� p�� ���� �� sort() ȣ��
    ~SortedArray(); // �Ҹ���
    SortedArray operator+(const SortedArray& b);
    SortedArray& operator=(const SortedArray& b); // ���� �迭�� b �迭�� ����
    void show(const string& name); // �迭�� ���� ���
};

void SortedArray::sort(){ // ���� �迭�� ������������ ����
    if (p == nullptr || size == 0){ return; } //�������� �ʰų� ���� ������ ����
    for (int i = 0; i < size-1 ; i++){
        for (int j = 0; j < size - 1-i ; j++){
            if (p[j] > p[j+1]){
                int temp = p[j];  //�ٲٱ�
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}

SortedArray::SortedArray():size(0),p(nullptr){} // p�� nullptr�� size�� 0���� �ʱ�ȭ

SortedArray::SortedArray(const SortedArray& arr){ //���� ������ ����
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

SortedArray::SortedArray(int arr[], int size) { //������. ���� �迭�� ũ�⸦ ���޹޾� p�� ���� �� sort() ȣ��
    this->size = size; //�Ű������� ���� �迭�� ũ�⸦ ���� ��ü�� ������� ����
    if (size > 0) {
        p = new int[size]; //������ ���� �Ҵ�
        for (int i = 0; i < size; i++) { //�迭 �� ���� ����
            p[i] = arr[i];
        }
        sort(); //����
    } else { //���� �迭�� ũ�Ⱑ 0�� ��� �׳� nullptr�� ����.
        p = nullptr;
    }
}

SortedArray::~SortedArray() {
    delete[] p; //�Ҹ��� ����
}

SortedArray SortedArray::operator+(const SortedArray& b) { //��ü�� ���ļ� ��ģ �迭�� ������ ����.
    SortedArray result;
    result.size = size+b.size; //���θ���� �迭�� ����� �� ��ü�� ������ ���� ������ �ʱ�ȭ

    if (result.size>0) { 
        result.p = new int[result.size]; //�� ������� ���� �迭 ����
        for (int i = 0; i <size; i++) { result.p[i] = p[i];}

        for (int i = size; i <result.size; i++) { result.p[i] = b.p[i-size]; }

        result.sort(); //���� ����
    }
    return result;
}

SortedArray& SortedArray::operator=(const SortedArray& b) { // ���� �迭�� b �迭�� ����
    if (this == &b) {return *this; } //���� ��ü�� �����Ϸ��� ��ü�� ������ Ȯ�� �� ���ٸ� �׳� ���� ����.
    delete[] p;//���� �Ҹ���
    size = b.size;  //�ٸ��ٸ� �����Ϸ��� ��ü�� ������� ����
    if (size > 0) {
        p = new int[size]; //�� ������� ���� �Ҵ�
        for (int i = 0; i < size; i++) { p[i] = b.p[i]; } //����
    }
    else {  p = nullptr; } //���� ����� 0�� ��� �׳� nullptr�� ����.

    return *this; 
}

void SortedArray::show(const string& name) { // �迭�� ���� ���
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
    cout << "20215135 ���ؼ�"<< endl;
    a.show("a");
    b.show("b");
    c.show("c");

    return 0;
}