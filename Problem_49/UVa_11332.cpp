#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int s(int x){
    int total = 0;
    while(x > 0){
        total += x % 10;
        x = x / 10;
    }
    return total;
}

int main(){
    char num[15] = {0};
    while(fgets(num,sizeof(num),stdin)!=NULL){
        num[strcspn(num,"\n")] = '\0';
        if(num[0] == '0'){
            break;
        }
        int sum = 0;
        for(int i = 0;num[i]!='\0';i++){
            int digit = num[i] - '0';
            sum += digit;
        }
        if(sum < 10){
            printf("%d\n",sum);
        }
        while(sum >= 10){
            sum = s(sum);
            if(sum < 10){
            printf("%d\n",sum);
            break;
        }
        }
    }
    return 0;
}