#include <stdio.h>
//킹, 귄, 룩, 비숍, 나이트, 폰
//1,  1,  2,   2,    2,     8   
int main(){
    int chess[6] = {1,1,2,2,2,8};
    int arr[6];
    for(int i=0; i<6; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<6; i++){
        printf("%d ", chess[i]-arr[i]);
    }

}