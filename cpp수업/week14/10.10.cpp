#include <iostream>
#include <string>
using namespace std;

class Shape {
 Shape *next;
protected:
string name; //도형의 이름
public:
Shape(string n="") : next{NULL}, name{n} {}
 virtual void draw() = 0; //class 명과 name 출력 
 Shape *add(Shape *s); //next에 입력된 s도형 저장 후 마지막 도형 반환
 Shape *getNext(); //다음 도형 리턴
};
Shape* Shape::add(Shape* s) {
    if (next == NULL) {
        next = s;
        return next;
    }
    else {
        return next->add(s);
    }
}
Shape* Shape::getNext() {
    return next;
}
class Oval : public Shape {
public:
    Oval(string n) : Shape(n) {}
    void draw() override {
        cout << "Oval: " << name << endl;
    }
};
class Rectangle : public Shape {
public:
    Rectangle(string n) : Shape(n) {}
    void draw() override {
        cout << "Rectangle: " << name << endl;
    }
};
class Triangle : public Shape {
public:
    Triangle(string n) : Shape(n) {}
    void draw() override {
        cout << "Triangle: " << name << endl;
    }
};
class Manage {
public:
void run() {
 Shape *pStart=NULL, *pLast=NULL;
 string choice, namechoice;
 bool startFlag = true;
 while (true) {
 cout << "\n생성할 도형을 선택하세요\n o:Oval, r:Rectangle, t:Triangle, 이외:finish : ";
 cin >> choice;
 if( !(choice=="o" || choice=="r" || choice=="t")) break;
 cout << " 도형의 이름을 입력하세요 : ";
 cin >> namechoice;
 switch(startFlag) {
 case true :
 if(choice == "o") pStart = new Oval(namechoice); 
 else if(choice == "r") pStart = new Rectangle(namechoice); 
 else if(choice == "t") pStart = new Triangle(namechoice); 
 pLast = pStart;
 startFlag = false;
 break;
 case false :
 if(choice == "o") pLast = pLast->add(new Oval(namechoice)); 
 else if(choice == "r") pLast = pLast->add(new Rectangle(namechoice)); 
 else if(choice == "t") pLast = pLast->add(new Triangle(namechoice)); 
 break;
 }
 }
 cout << "\n연결된 모든 도형 출력" << endl;
 //
 //연결된 모든 도형 출력 구현
 //
 cout << "end" << endl;
 cout << "\n연결된 모든 도형 삭제" << endl;
 //
 //연결된 모든 도형 삭제 구현
 //
 cout << "end" << endl;
 }
};

int main() {
    Manage man;
    man.run();
}