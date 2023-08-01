#include <iostream>
using namespace std;

bool isCheck(int i, Exam e);

class ExamMember {
    void em_method(Exam e);
};

class Exam {
 //외부함수 isCheck()를 프렌드로 선언
 friend bool isCheck(int i, Exam e);
 //ExamMember 클래스의 멤버 함수 em_method()를 프렌드로 선언
 friend void ExamMember::em_method(Exam e);
 //ExamMember 클래스 전체를 프렌드로 선언
 friend class Exam;
};

