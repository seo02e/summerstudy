#include <stdio.h>
#include <string.h>
int main(){
    char arr[5][16];

    for(int i=0; i<5; i++){
        scanf("%s", &arr[i]);
        int len = strlen(arr[i]);
        for (int j = len; j < 15; j++) {
            arr[i][j] = '\0';
        }
    }
    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if (arr[j][i] != '\0') {
                printf("%c", arr[j][i]);
            }
        }
    }

}