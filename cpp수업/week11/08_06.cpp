#include <iostream>
using namespace std;
class Book {
    string title;
    int price;
public:
    Book(string title = "", int price = 0) {
        this->title = title;
        this->price = price;
    }
    void show(string obj) {
        cout << obj << ") title=" << title << ", price=" << price << endl;
    }
    string getTitle() {
        return title;
    }
    Book& operator+=(int amount) {
        price += amount;
        return *this;
    }
    Book& operator-=(int amount) {
        price -= amount;
        return *this;
    }
    bool operator==(int value) {
        return price == value;
    }
    bool operator==(const string& value) {
        return title == value;
    }
    bool operator==(const Book& other) {
        return title == other.title && price == other.price;
    }
};
int main() {
    Book a("û��", 20000), b("�̷�", 30000);
    a += 500; //å a�� ���� 500�� ����
    b -= 500; //å b�� ���� 500�� ����
    a.show("a");
    b.show("b");
    Book c("��ǰ C++", 30000), d("��ǰ C++", 30000);
    if (c == 30000) cout << "��ǰ C++ ���� 30000��" << endl; //price ��
    if (c == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; //å title ��
    if (c == d) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price ��� ��
    else cout << "�� å�� �ٸ� å�Դϴ�." << endl;
}