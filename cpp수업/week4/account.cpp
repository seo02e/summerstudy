#include <iostream>
#include <string>
#include "account.h" //����ҷ�����
using namespace std;
using Bank::Account;
using Bank::MENU;
Account::Account(){} //����Ʈ ������
Account::Account(string name, int M): Owner(name), money(M){} //�Ű������ִ� ������ ����
void Account::deposit(int MM){
    money += MM;
}  //1. �Ա��Լ� ����
int Account::withdraw(int MM){ //2.��� �Լ� ����
    if(money >= MM){
        money -= MM;
        return MM;
    }
    else{
        cout << "�ܾ��� �����մϴ�." << endl; //+�ܾ׺��� ū �� �Է½� ���
        return 0;
    }
}
int Account::check(){ return money; } //�ܾ� ���� �Լ� ����
string Account::getOwner(){  return Owner;  } //������̸� ���� ����
Account::~Account(){
    cout << Owner<<": ��ü �Ҹ�"<< endl; //�Ҹ��� ����
}