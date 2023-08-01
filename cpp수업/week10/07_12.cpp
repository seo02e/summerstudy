#include <iostream>

using namespace std;

class ArrayUtil {
public:
 //s1�� s2�� ������ ���ο� �迭�� ���� �����Ͽ� ����
 static int* concat(int s1[], int size1, int s2[], int size2, int&retSize);
 //s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
 static int* remove(int s1[], int size1, int s2[], int size2, int&retSize);
};


//concat() �����մϴ�.
int* ArrayUtil::concat(int s1[], int size1, int s2[], int size2, int&retSize){
    int* result = new int[size1 + size2]; // ������ ����ȹ迭�� ������ ���� ����
        for (int i = 0; i < size1; i++) {
            result[i] = s1[i]; // s1�� ���Ҹ� ���ο� �迭�� ����.
        }
        for (int i = 0; i < size2; i++) {
            result[size1 + i] = s2[i]; // s2�� ���Ҹ� s1ũ���� ���� ���� ����.
        }
        retSize = size1 + size2;
        return result; // ����� �迭 ����
    }


//remove() �����մϴ�.
int* ArrayUtil::remove(int s1[], int size1, int s2[], int size2, int& retSize) {
        int* result = new int[size1]; //s1-s2�� ���� ������ ���� ���� ����. (�̶� size1�� ũ�� ���� Ŭ �� ����.)
        int count = 0;
        for (int i =0; i<size1; i++) {
            bool found = false; // ���� ���Ұ� s2�� �ִ��� Ȯ��
            for (int j = 0; j <size2; j++) {
                if (s1[i] == s2[j]) {
                    found = true;
                    break;
                }
            }
            if (!found){ //found�� 0, �� ��ġ�� ���Ұ� ���� ��
                result[count] = s1[i]; //���ο� �迭�� ����
                count++;
            }
        }//2�� for������ �迭 2�� ��
        retSize = count; //���� ���ο� �迭�� ũ�� �ʱ�ȭ.
        return result; //s1-s2 �迭 ����.
}
int main() {
 int xcount = 0, ycount = 0;
 int *x, *y;

 //x�迭�� ������ ����(1~5)�� �Է� �޴´�.
 cout << "x�迭�� ����(1~5)�� �� �� ?";
 cin >> xcount;
 x = new int[xcount]; //�Է� ���� ����ŭ x�迭�� ���� �����Ѵ�.

 cout << "x�迭�� ������ ���� �Է� : ";  //������ �Է� �޾�
 for(int i=0; i< xcount; i++){
    cin >> x[i]; //x�迭�� �����Ѵ�.
 }

 //y�迭�� ������ ����(1~5)�� �Է� �޴´�.
 cout << "y�迭�� ����(1~5)�� �� �� ?";
 cin >> ycount;
 y = new int[ycount]; //�Է� ���� ����ŭ y�迭�� ���� �����Ѵ�.

 cout << "y�迭�� ������ ���� �Է� : ";  //������ �Է� �޾�
 for(int i=0; i< ycount; i++){
    cin >> y[i]; //y�迭�� �����Ѵ�.
 }


 int retsize = 0;

 //concat() �Լ��� ȣ���Ѵ�.
 int* conarr = ArrayUtil::concat(x, xcount, y, ycount, retsize);

 cout << "\nx�迭�� y�迭�� ������ �迭�� ";
 for (int i = 0; i < retsize; i++) cout << conarr[i] << ' ';
 cout << endl;


 //remove() �Լ��� ȣ���Ѵ�.
 int* remarr = ArrayUtil::remove(x, xcount, y, ycount, retsize);

 cout << "\nx�迭���� y�迭�� ���Ҹ� ������ ���, x�迭�� ������ " << retsize << "��, ";
 for (int i = 0; i < retsize; i++) cout << remarr[i] << ' ';
 cout << endl;
 //���� �Ҵ�� ��� ������ ���� �Ѵ�. 

 delete[] x;
 delete[] y;
 delete[] conarr;
 delete[] remarr;
 }