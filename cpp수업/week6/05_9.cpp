#include <iostream>
#include <string>
using namespace std;
class Pizza {
    string *size;
public:
    Pizza() = default;
    ~Pizza();
    void setSize(string s); //s를 size에 대입
    string getSize();
};
Pizza::~Pizza(){
    delete size;
    cout << "소멸자 I had it all."<< endl;
}
string Pizza::getSize(){
    return *Pizza::size; //*이 붙음으로써 값이 리턴
}
void Pizza::setSize(string s){
    this -> size;
}
int main(){
    int num=0;
    Pizza *p;
    string size;
    cout << "피자 몇 판? ";
    cin >> num;
    p = new Pizza[num];   //new가 있는 곳에 delete해야함
    cout << "피자 크기는(small, medium, large)? ";
    cin >> size;


}