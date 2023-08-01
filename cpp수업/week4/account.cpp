#include <iostream>
#include <string>
#include "account.h" //헤더불러오기
using namespace std;
using Bank::Account;
using Bank::MENU;
Account::Account(){} //디폴트 생성자
Account::Account(string name, int M): Owner(name), money(M){} //매개변수있는 생성자 구현
void Account::deposit(int MM){
    money += MM;
}  //1. 입금함수 구현
int Account::withdraw(int MM){ //2.출금 함수 구현
    if(money >= MM){
        money -= MM;
        return MM;
    }
    else{
        cout << "잔액이 부족합니다." << endl; //+잔액보다 큰 수 입력시 출력
        return 0;
    }
}
int Account::check(){ return money; } //잔액 리턴 함수 구현
string Account::getOwner(){  return Owner;  } //사용자이름 리턴 구현
Account::~Account(){
    cout << Owner<<": 객체 소멸"<< endl; //소멸자 구현
}