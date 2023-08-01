#include "randint.h"
#include <iostream>
#include <random>
#include <ctime>
using namespace std;
RandInt::RandInt(int l, int h, string cn) : low(l), high(h), objname(cn){
    mt19937 gen(time(nullptr));
    uniform_int_distribution<int> int_rd(low,high);
    rannum = int_rd(gen); 
};
RandInt::~RandInt(){
    cout <<objname <<"객체 소멸" << endl;
}
void RandInt::print() const{
    cout << "Random number between " << low << " and " << high << " : " <<rannum <<endl;
}



