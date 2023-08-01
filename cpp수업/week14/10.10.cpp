#include <iostream>
#include <string>
using namespace std;

class Shape {
 Shape *next;
protected:
string name; //������ �̸�
public:
Shape(string n="") : next{NULL}, name{n} {}
 virtual void draw() = 0; //class ��� name ��� 
 Shape *add(Shape *s); //next�� �Էµ� s���� ���� �� ������ ���� ��ȯ
 Shape *getNext(); //���� ���� ����
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
 cout << "\n������ ������ �����ϼ���\n o:Oval, r:Rectangle, t:Triangle, �̿�:finish : ";
 cin >> choice;
 if( !(choice=="o" || choice=="r" || choice=="t")) break;
 cout << " ������ �̸��� �Է��ϼ��� : ";
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
 cout << "\n����� ��� ���� ���" << endl;
 //
 //����� ��� ���� ��� ����
 //
 cout << "end" << endl;
 cout << "\n����� ��� ���� ����" << endl;
 //
 //����� ��� ���� ���� ����
 //
 cout << "end" << endl;
 }
};

int main() {
    Manage man;
    man.run();
}