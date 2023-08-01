#include <stdio.h>

int main(){
//---------변수--------------------------
    int num; //입력받는 수
    int x,y=1; //공백 수, * 수;
//--------구현---------------------------
    scanf("%d", &num);
    x = num-1;
    for(int i=0; i<num*2-1; i++){
        if(i<num){
            for(int j=0; j<x; j++){
                printf(" ");
            }
            for(int j=0; j<y; j++){
                printf("*");
            }
            x--;
            y+=2;
        }
        else{
            for(int j=0; j<x+2; j++){
                printf(" ");
            }
            for(int j=0; j<y-4; j++){
                printf("*");
            }
            x++;
            y-=2;
        }
        printf("\n");
    }
}