#include <stdio.h>
int main(){
    int arr[100][100];
    int i=0;
    int x,y;
    int alal;

    for (int j = 0; j < 100; j++) {
        for(int i=0; i<100; i++){
            arr[i][j] = 0;
        }
    }
    while(i!=EOF){
        scanf("%d %d", x,y);
        for(int i=x; i<x+10; i++){
            for(int j=y; j<y+10; j++){
                arr[i][j] +=1;
            }
        }
    }
    for (int j = 0; j < 100; j++) {
        for(int i=0; i<100; i++){
            if(arr[i][j]==0){
                alal++;
            }
        }
    }
    printf("%d", alal);
}