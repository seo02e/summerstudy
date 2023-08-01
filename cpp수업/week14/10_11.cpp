#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;
class AbstractGate { //추상 클래스
public:
    virtual bool operation(bool x, bool y, bool z) = 0; // 순수 가상 함수
};
//필요한 함수와 클래스 작성
//단, 각각의 게이트는 ANDGate, ORGate, XORGate 클래스로 작성하며 AbstractGate를 상속받는다.
class ANDGate : public AbstractGate {
public:
    bool operation(bool x, bool y, bool z) {
        return x && y && z;
    }
};
class ORGate : public AbstractGate {
public:
    bool operation(bool x, bool y, bool z) {
        return x || y || z ;
    }
};
class XORGate : public AbstractGate {
public:
    bool operation(bool x, bool y, bool z) {
        return (x !=y) !=z;
    }
};


class Manage {
public:
    static void run();
};

void Manage::run() {
    AbstractGate *ag = nullptr;
    int choice;
    bool b1, b2, b3;
     while (true) {
        cout << "\n연산 종류를 선택하세요 1.and, 2.or, 3.xor, 4.stop >> ";
        cin >> choice;
        string i;
        if (choice == 4) {
            break;
        }
        //--------------------------------------------------
        else if (choice == 1) {
            ag = new ANDGate();
            i="AND";
        }
        else if (choice == 2) {
            ag = new ORGate();
            i="OR";
        }
        else if (choice == 3) {
            ag = new XORGate();
            i="XOR";
        }
        else {
            cout << "잘못된 입력입니다." << endl;
            continue;
        }
        cout << "(true:1, false:0) 게이트 입력 값 3개 >> : ";
        cin >> b1 >> b2 >> b3;
        bool result = ag->operation(b1, b2, b3);
        cout << i << " : " <<boolalpha<<b1 << "," <<boolalpha<<b2 << "," <<boolalpha<<b3 << " => " <<boolalpha<< result << endl;
        delete ag;
    }

    }
//-----------------------------------------------
int main(){
    cout << "20215135 김준서 "<< endl;
    Manage::run();
}
