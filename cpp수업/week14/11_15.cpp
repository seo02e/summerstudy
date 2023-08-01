#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
class Nation {
string nation; //나라이름
string capital; //수도
public:
Nation(string nation, string capital) {
this->nation = nation;
this->capital = capital;
}
string getCapital() { return capital; }
string getNation() { return nation; }
void show() {
cout << '(' << nation << ',' << capital << ')';
}
};
class NationGame {
vector<Nation> v;
void input();
void list();
void quiz();
bool exist(string nation);
public:
NationGame();
void run();
};
NationGame::NationGame() {
 Nation n[] = { 
 Nation("미국", "워싱턴"), Nation("영국", "런던"), Nation("프랑스", "파리"), Nation("중국", "베이징"), Nation("일본", "도쿄"), Nation("러시아", "모스크바"), Nation("브라질", "브라질리아"), Nation("독일", "베를린"), Nation("멕시코", "멕시코시티") 
 };
 for (int i = 0; i < 9; i++)
v.emplace_back(n[i]); //v.push_back(n[i]);
srand((unsigned)time(0)); //시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
}
void NationGame::run() {
cout << "***** 국가의 수도 맞추기 게임을 시작합니다. *****" << endl;
while (true) {
int cmd;
cout << "\n1(정보 입력), 2(퀴즈), 3(종료) : ";
cin >> cmd;
switch (cmd) {
case 1: input(); break;
case 2: quiz(); break;
case 3: return;
}
}
}
void NationGame::quiz() {
while (true) {
int index = rand() % v.size(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수가 n에 발생
cout << v[index].getNation() << "의 수도는? ";
//
//이곳을 완성합니다. //
}
}
void NationGame::input() {
string nation, capital;
cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
cout << "\n국가와 수도를 입력하세요(quit quit이면 입력 종료)" << endl;
while (true) {
//
//이곳을 완성합니다. //
}
}
bool NationGame::exist(string nation) {
}
int main() {
NationGame game;
game.run();
}