#include <iostream>

using namespace std;

class ArrayUtil {
public:
 //s1과 s2를 연결한 새로운 배열을 동적 생성하여 리턴
 static int* concat(int s1[], int size1, int s2[], int size2, int&retSize);
 //s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
 static int* remove(int s1[], int size1, int s2[], int size2, int&retSize);
};


//concat() 구현합니다.
int* ArrayUtil::concat(int s1[], int size1, int s2[], int size2, int&retSize){
    int* result = new int[size1 + size2]; // 리턴할 연결된배열을 저장할 공간 생성
        for (int i = 0; i < size1; i++) {
            result[i] = s1[i]; // s1의 원소를 새로운 배열에 복사.
        }
        for (int i = 0; i < size2; i++) {
            result[size1 + i] = s2[i]; // s2의 원소를 s1크기의 다음 부터 저장.
        }
        retSize = size1 + size2;
        return result; // 연결된 배열 리턴
    }


//remove() 구현합니다.
int* ArrayUtil::remove(int s1[], int size1, int s2[], int size2, int& retSize) {
        int* result = new int[size1]; //s1-s2의 값을 저장할 공간 동적 생성. (이때 size1의 크기 보다 클 수 없음.)
        int count = 0;
        for (int i =0; i<size1; i++) {
            bool found = false; // 현재 원소가 s2에 있는지 확인
            for (int j = 0; j <size2; j++) {
                if (s1[i] == s2[j]) {
                    found = true;
                    break;
                }
            }
            if (!found){ //found가 0, 즉 겹치는 원소가 없을 때
                result[count] = s1[i]; //새로운 배열에 복사
                count++;
            }
        }//2중 for문으로 배열 2개 비교
        retSize = count; //최종 새로운 배열의 크기 초기화.
        return result; //s1-s2 배열 리턴.
}
int main() {
 int xcount = 0, ycount = 0;
 int *x, *y;

 //x배열의 원소의 개수(1~5)를 입력 받는다.
 cout << "x배열의 원소(1~5)는 몇 개 ?";
 cin >> xcount;
 x = new int[xcount]; //입력 받은 수만큼 x배열을 동적 생성한다.

 cout << "x배열에 저장할 정수 입력 : ";  //정수를 입력 받아
 for(int i=0; i< xcount; i++){
    cin >> x[i]; //x배열에 저장한다.
 }

 //y배열의 원소의 개수(1~5)를 입력 받는다.
 cout << "y배열의 원소(1~5)는 몇 개 ?";
 cin >> ycount;
 y = new int[ycount]; //입력 받은 수만큼 y배열을 동적 생성한다.

 cout << "y배열에 저장할 정수 입력 : ";  //정수를 입력 받아
 for(int i=0; i< ycount; i++){
    cin >> y[i]; //y배열에 저장한다.
 }


 int retsize = 0;

 //concat() 함수를 호출한다.
 int* conarr = ArrayUtil::concat(x, xcount, y, ycount, retsize);

 cout << "\nx배열과 y배열을 연결한 배열은 ";
 for (int i = 0; i < retsize; i++) cout << conarr[i] << ' ';
 cout << endl;


 //remove() 함수를 호출한다.
 int* remarr = ArrayUtil::remove(x, xcount, y, ycount, retsize);

 cout << "\nx배열에서 y배열의 원소를 삭제한 결과, x배열의 개수는 " << retsize << "개, ";
 for (int i = 0; i < retsize; i++) cout << remarr[i] << ' ';
 cout << endl;
 //동적 할당된 모든 변수를 해제 한다. 

 delete[] x;
 delete[] y;
 delete[] conarr;
 delete[] remarr;
 }