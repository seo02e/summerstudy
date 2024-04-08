#include <stdio.h>

int main(){
    int T,C;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%d", &C);
        if(C%25 !=0 ){
            printf("%d ", C%25);
            C = C/25;
        }
        else if(C%10 !=0){
            printf("%d ", C%10);
            C /= 10;
        }
        else if(C%5 != 0){
            printf("%d ", C%5);
            C /= 5;
        }
        else{
            printf("%d", C/1);
        }
    }


}