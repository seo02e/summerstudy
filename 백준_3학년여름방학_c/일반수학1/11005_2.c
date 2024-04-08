#include <stdio.h>
#include<string.h>

int main(){
    char num[100000];
    int N, B, sum;
    scanf("%d%d", &N, &B);
    sum = N;
    for(int i=sum; i>0; i/=B){
        int y = i%B;
        if (0 <= y && y <= 9) {
            y += '0';
        } else {
            y = y + 'A' - 10;
        }
        char temp[2];
        temp[0] = y;
        temp[1] = '\0';
        strcat(num, temp);
    }
    char reversed[100000];
    int len = strlen(num);
    for (int i = 0; i < len; i++) {
        reversed[i] = num[len - 1 - i];
    }
    reversed[len] = '\0';

    printf("%s\n", reversed);

    return 0;
}