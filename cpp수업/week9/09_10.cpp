#include <iostream>
#include <string.h>
using namespace std;
class Person {
private:
    char* name;
public:
    Person() = default;
    Person(const char* n);
    Person(const Person& person); // 복사 생성자
    Person(Person&& p); // 이동 생성자
    ~Person();
    void show(string obj);
};
//생성자
Person::Person(const char* n) {
    name = new char[strlen(n)+1];
    strcpy(this->name, n);
}
//복사 생성자
Person::Person(const Person& person) {
    name = new char[strlen(person.name) +1];
    strcpy(this->name, person.name);
}
//이동 생성자
Person::Person(Person&& p) {
    name = p.name;
    p.name = nullptr;
}
//소멸자
Person::~Person() {
    cout << "소멸자 실행" << endl; 
}
//show 함수
void Person::show(string obj){
    if(name==nullptr){
        cout << obj <<" name = x" << endl;
    }
    else{
        cout << obj <<" name = " << name << endl;
    }
}
int main() {
 cout << "20215135 김준서"<<endl;
 cout << "-1----------" << endl;
 Person dan("daniel");
 Person ben = Person("benny");
 cout << "-2----------" << endl;
 Person mvdan = move(dan);
 cout << "-3----------" << endl;
 Person cpben = ben;
 Person cpmvdan(mvdan);
 cout << "-4----------" << endl;
 dan.show("dan");
 ben.show("ben");
 mvdan.show("mvdan");
 cpben.show("cpben");
 cpmvdan.show("cpmvdan");
 return 0;
}