#include <bits/stdc++.h>

using namespace std;

int digit_sum(int x){
    int total = 0;
    while(x>0){
    total += x % 10;
    x = x /10;
    }
    return total;
}
int main(){
    char num[1005] = {0};
    while(fgets(num,sizeof(num),stdin)!=NULL){
        num[strcspn(num,"\n")] = '\0';
        if(strcmp(num,"0") == 0){
            break;
        }
        int sum = 0;
        for(int i = 0;num[i]!='\0';i++){
            sum += num[i] -'0';
        }
        if(sum % 9 != 0){
            printf("%s is not a multiple of 9.\n",num);
        }
        else{
            int degree = 1;
            while(sum >= 10){
                sum = digit_sum(sum);
                degree++;
            }
             printf("%s is a multiple of 9 and has 9-degree %d.\n",num,degree);
        }
    }
    return 0;
}