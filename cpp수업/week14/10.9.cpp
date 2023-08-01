#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string name; //������ �̸�
    int width, height; //������ �����ϴ� �簢��
public:
    Shape(string n = "", int w = 0, int h = 0) : name(n), width(w), height(h) {}
    string getName() { return name; } //�̸� ����
    virtual double getArea() = 0; //3.14*width*height; //width*height; //width*height/2;
};

//�ʿ��� Ŭ���� �ۼ�--------------------------
class Oval  : public Shape { //ȣ���� ����
public:
    Oval(string n, int w, int h) : Shape(n, w, h) {}
    virtual double getArea() override {
        return 3.14 * width * height;
    }
};
class Rectangle : public Shape{
public:
    Rectangle(string n, int w, int h) : Shape(n, w, h){}
    virtual double getArea() override{
        return (width * height);
    }
};
class Triangle : public Shape { //�ﰢ���� ���� ���ϱ�
public:
    Triangle(string n, int w, int h) :Shape(n, w, h){}
    virtual double getArea() override {
        return (width * height / 2.0);
    }
};
//-----------------
int main() {
    Shape *p[3];
    p[0] = new Oval("ȣ��", 10, 20); 
    p[1] = new Rectangle("��Ʈ", 30, 40);
    p[2] = new Triangle("�ﰢ��", 30, 40);
    for (int i = 0; i < 3; i++)
        cout << p[i]->getName() << "�� ���̴� " << p[i]->getArea() << endl;
    for (int i = 0; i < 3; i++) delete p[i];
}


