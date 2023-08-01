#include <iostream>
using namespace std;

class Matrix {
    int ar[4];
public:
     Matrix(int a1 = 0, int a2 = 0, int b1 = 0, int b2 = 0) {
        ar[0] = a1;
        ar[1] = a2;
        ar[2] = b1;
        ar[3] = b2;
    }

    void show(string name) {
        cout << name << "= { ";
        for (int i = 0; i < 4; i++) {
            cout << ar[i] << " ";
        }
        cout <<" }"<< endl;
    }

    Matrix operator+(const Matrix& other) {
        Matrix result;
        for (int i = 0; i < 4; i++) {
            result.ar[i] = ar[i] + other.ar[i];
        }
        return result;
    }

    Matrix& operator+=(const Matrix& other) {
        for (int i = 0; i < 4; i++) {
            ar[i] += other.ar[i];
        }
        return *this;
    }

    Matrix& operator>>(int* arr) {
        for (int i = 0; i < 4; i++) {
            arr[i] = ar[i];
        }
        return *this;
    }

    Matrix& operator<<(const int* arr) {
        for (int i = 0; i < 4; i++) {
            ar[i] = arr[i];
        }
        return *this;
    }
};
int main() {
    Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
    c = a + b;
    a.show("a");
    b.show("b");
    c.show("c");
    a += b;
    a.show("a");
    int x[4], y[4] = {5, 6, 7, 8};
    a >> x; // a의 각 원소를 배열 x에 복사. b << y; // 배열 y의 원소 값을 b의 각 원소에 설정
    cout << "x= { ";
    for (int i = 0; i < 4; i++)
        cout << x[i] << ' '; // x[] 출력
    cout << "}" << endl;
    b.show("b");
}
