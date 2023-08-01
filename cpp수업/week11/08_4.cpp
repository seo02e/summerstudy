#include <iostream>
using namespace std;
class Power { //에너지를 표현하는 파워 클래스
    int kick; //발로 차는 힘
    int punch; //주먹으로 치는 힘
public:
    Power(int kick=0, int punch=0) {
    this->kick = kick;
    this->punch = punch;
    }
    void show(string obj); //멤버함수
    
    Power operator*(const Power& other){
        Power result;
        result.kick = this->kick * other.kick;
        result.punch = this->punch * other.punch;
        return result;
    }
    friend Power operator*(const Power& power1, const Power& power2) { //외부함수
    Power result;  
    result.kick = power1.kick * power2.kick;
    result.punch = power1.punch * power2.punch;
    return result;
    }
};
void Power::show(string obj) {
    cout << obj << ") kick=" << kick << ',' << "punch=" << punch << endl;
}
int main(){
    Power a(3,5), b(4,6), c;
    c = a * b;
    a.show("a");
    b.show("b");
    c.show("c");
}