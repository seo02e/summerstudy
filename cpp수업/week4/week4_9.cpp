#include <iostream>
using namespace std;

class Hallym{
 string dept;
public:
 Hallym(string d); //매개변수값을 멤버 변수로 초기화
 string getDept(); //멤버 변수 값 반환
};

Hallym::Hallym(string d): dept(d){ };
string Hallym::getDept(){ return dept; }

int main(){
    Hallym ha("C++");
    string dept_main = ha.getDept();
    cout << "dept : "<< dept_main << endl;
    Hallym haha("cpp");
    string dept_main2 = haha.getDept();
    cout << "dept2 : "<< dept_main2 << endl;
    return 0;
}