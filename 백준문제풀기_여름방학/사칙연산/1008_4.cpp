#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int A, B;
    cin >>A>>B;
    double result = static_cast<double>(A)/B;
    cout <<setprecision(10)<< result;
}