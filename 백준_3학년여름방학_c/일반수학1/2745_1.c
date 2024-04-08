#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char num[101];
    int base, result = 0;
    
    scanf("%s%d", num, &base);

    int len = strlen(num);
    for (int i = 0; i < len; i++) {
        int digit;
        if ('0' <= num[i] && num[i] <= '9') {
            digit = num[i] - '0';
        } else {
            digit = num[i] - 'A' + 10;
        }
        result += digit * (int)pow(base, len - 1 - i);
    }
    
    printf("%d\n", result);

    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *str = (char*)malloc(100 * sizeof(char));
    int input, x, sum=0;
    scanf("%s%d", str, &input);
    for(int i=0; i<strlen(str); i++){
        x = str[i]-55;
        for(int j=strlen(str)-1-i; j>0; j--){
            x *= input;
        }
        sum += x;
    }
    printf("%d", sum);
    free(str);
}
*/