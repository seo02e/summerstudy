#include <iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person() : name("Anonymous") , age(0){
         cout << "생성자 수행 " << name<< ","<<age << endl;
    }
    Person(string n, int a): name(n), age(a){//상위클래스로 넘어갈수 있으니 무조건
    //이니셜라이즈로 멤버변수 초기화
        cout << "생성자 수행 " << name<< ","<<age << endl;
    }
    string getName(){ return this->name;}
    int getAge() { return this->age;}
    ~Person(){
        cout << "소멸자 수행 " << name << endl;
    }
};

int main(){
    Person baby;
    Person child("benny", 10);
    cout << "baby name = " << baby.getName() <<endl;
    cout << "child name = " << child.getName() << endl;
    return 0;
}