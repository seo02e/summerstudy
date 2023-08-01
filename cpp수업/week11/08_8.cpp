#include <iostream>
#include <string>
using namespace std;
class Circle {
private:
    int radius;
public:
    Circle(int radius=0) : radius(radius){}
    void show(string name) {
        cout << name << " 반지름  :   " << radius << endl;
    }
    Circle operator++(int){
        Circle ay(*this); // 반지름+1
        radius++;
        return ay;
    }
    Circle& operator++(){ // 반지름+1
        radius++;
        return *this;
    }
    Circle operator+(int num) {
        Circle ay(*this); // 반지름+num
        ay.radius += num;
        return ay;
    }
};

int main() {
    Circle a(5), b(4);
    a.show("a");
    b.show("b");

    ++a; // 반지름을 1 증가 시킨다.
    a.show("a");

    b = a++; // 반지름을 1 증가 시킨다.
    a.show("a");
    b.show("b");

    b = a + 3; // b의 반지름을 a의 반지름에 3을 더한 것으로 변경
    b.show("b");

    return 0;
}


