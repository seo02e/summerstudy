#include <iostream>
using namespace std;
void fun (int* x){
 cout << *(x + 2);
}
int main (){
 int sample[] = {0, 10, 20, 30, 40};
 fun(sample);
 return 0;
}
