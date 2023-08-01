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
    Book a("청춘", 20000), b("미래", 30000);
    a += 500; //책 a의 가격 500원 증가
    b -= 500; //책 b의 가격 500원 감소
    a.show("a");
    b.show("b");
    Book c("명품 C++", 30000), d("고품 C++", 30000);
    if (c == 30000) cout << "명품 C++ 정가 30000원" << endl; //price 비교
    if (c == "명품 C++") cout << "명품 C++ 입니다." << endl; //책 title 비교
    if (c == d) cout << "두 책이 같은 책입니다." << endl; // title, price 모두 비교
    else cout << "두 책이 다른 책입니다." << endl;
}