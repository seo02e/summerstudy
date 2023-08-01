#include <stdio.h>
int main(){
    long int arr[100][100]={{0},};
    int I;
    int x,y;
    int alal=0;
    scanf("%d", &I);
    for(int i=0; i<I; i++){
        scanf("%d%d",&x,&y);
        for(int j=x-1; j<x+9; j++){
            for(int k=y-1; k<y+9; k++){
                arr[j][k]=1;
            }
        }
    }

    for (int i = 0; i < 100; i++) {
        for(int j=0; j<100; j++){
            if(arr[i][j]!=0){
                alal++;
            }
        }
    }
    printf("%d", alal);
}