#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;
class AbstractGate { //�߻� Ŭ����
public:
    virtual bool operation(bool x, bool y, bool z) = 0; // ���� ���� �Լ�
};
//�ʿ��� �Լ��� Ŭ���� �ۼ�
//��, ������ ����Ʈ�� ANDGate, ORGate, XORGate Ŭ������ �ۼ��ϸ� AbstractGate�� ��ӹ޴´�.
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
        cout << "\n���� ������ �����ϼ��� 1.and, 2.or, 3.xor, 4.stop >> ";
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
            cout << "�߸��� �Է��Դϴ�." << endl;
            continue;
        }
        cout << "(true:1, false:0) ����Ʈ �Է� �� 3�� >> : ";
        cin >> b1 >> b2 >> b3;
        bool result = ag->operation(b1, b2, b3);
        cout << i << " : " <<boolalpha<<b1 << "," <<boolalpha<<b2 << "," <<boolalpha<<b3 << " => " <<boolalpha<< result << endl;
        delete ag;
    }

    }
//-----------------------------------------------
int main(){
    cout << "20215135 ���ؼ� "<< endl;
    Manage::run();
}
