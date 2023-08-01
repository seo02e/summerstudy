#include <iostream>
#include <string>
using namespace std;
class Circle {
private:
    int radius;
public:
    Circle(int radius=0) : radius(radius){}
    void show(string name) {
        cout << name << " ������  :   " << radius << endl;
    }
    Circle operator++(int){
        Circle ay(*this); // ������+1
        radius++;
        return ay;
    }
    Circle& operator++(){ // ������+1
        radius++;
        return *this;
    }
    Circle operator+(int num) {
        Circle ay(*this); // ������+num
        ay.radius += num;
        return ay;
    }
};

int main() {
    Circle a(5), b(4);
    a.show("a");
    b.show("b");

    ++a; // �������� 1 ���� ��Ų��.
    a.show("a");

    b = a++; // �������� 1 ���� ��Ų��.
    a.show("a");
    b.show("b");

    b = a + 3; // b�� �������� a�� �������� 3�� ���� ������ ����
    b.show("b");

    return 0;
}


