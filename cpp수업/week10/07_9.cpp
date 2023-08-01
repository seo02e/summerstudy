#include <iostream>
#include <string>
using namespace std;
class Person {
    int id;
    double weight;
    string name;
public:
//Person 생성자 작성//
    Person(int id=1, string name="Grace", double weight=20.5):id(id), weight(weight), name(name){
    }
    void show() { cout << id << ' '<< weight << ' ' <<name << endl; }
};

int main() {
    Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashley.show();
    helen.show();
}