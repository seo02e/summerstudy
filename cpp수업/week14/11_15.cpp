#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
class Nation {
string nation; //�����̸�
string capital; //����
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
 Nation("�̱�", "������"), Nation("����", "����"), Nation("������", "�ĸ�"), Nation("�߱�", "����¡"), Nation("�Ϻ�", "����"), Nation("���þ�", "��ũ��"), Nation("�����", "���������"), Nation("����", "������"), Nation("�߽���", "�߽��ڽ�Ƽ") 
 };
 for (int i = 0; i < 9; i++)
v.emplace_back(n[i]); //v.push_back(n[i]);
srand((unsigned)time(0)); //������ ������, �ٸ� �������� �߻���Ű�� ���� seed ����
}
void NationGame::run() {
cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****" << endl;
while (true) {
int cmd;
cout << "\n1(���� �Է�), 2(����), 3(����) : ";
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
int index = rand() % v.size(); // 0���� RAND_MAX(32767) ������ ������ ������ n�� �߻�
cout << v[index].getNation() << "�� ������? ";
//
//�̰��� �ϼ��մϴ�. //
}
}
void NationGame::input() {
string nation, capital;
cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
cout << "\n������ ������ �Է��ϼ���(quit quit�̸� �Է� ����)" << endl;
while (true) {
//
//�̰��� �ϼ��մϴ�. //
}
}
bool NationGame::exist(string nation) {
}
int main() {
NationGame game;
game.run();
}