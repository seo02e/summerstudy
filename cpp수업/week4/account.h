#ifndef ACCOUNT_H
#include <string>
namespace Bank{
    class Account{
        std::string Owner; //사용자 이름
        int money; //잔액
    public:
        Account(); //디폴트 생성자
        Account(std::string name, int don); //매개변수 생성자
        void deposit(int mo); //입금 함수
        int withdraw(int mo); //출금 함수
        int check(); //private인 멤버변수 money를 리턴
        std::string getOwner(); //private인 멤버변수 owner를 리턴
        ~Account();
    };
    enum class MENU{
        QUIT=4, DEPOSIT=1, WITHDRAW=2, CHECK=3
    };
}
#endif