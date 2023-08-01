#include <iostream>
#include <cmath>
using namespace std;

class Power {
  int kick; // 발로 차는 힘
  int punch; // 주먹으로 치는 힘
public:
  Power(int kick = 0, int punch = 0) {
    this->kick = kick;
    this->punch = punch;
  }

  Power operator<<(int n) {
    Power result;
    result.kick = this->kick * pow(2, n);
    result.punch = this->punch * pow(2, n);
    return result;
  }

  void show(string obj) {
    cout << obj << ") kick=" << kick << ", punch=" << punch << endl;
  }
};

int main() {
    Power a(2,3);
    a << 3;
    a.show("a");
    Power b(1,5);
    b << 1;
    b.show("b");
}