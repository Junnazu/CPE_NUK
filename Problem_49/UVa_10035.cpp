#include <stdio.h>

int main(){
    long long i,j;
    while(scanf("%lld %lld",&i,&j)==2){
        if(i == 0 && j == 0){
            break;
        }
            int sum = 0;
            long long next_i = i;
            long long next_j = j;
            int carry = 0;
        for(;next_i > 0 || next_j > 0;){
            if(next_i % 10 + next_j % 10 + carry >= 10){
                sum++;
                next_i /= 10;
                next_j /= 10;
                carry = 1;
            }
            else{
            carry = 0;
            next_i /= 10;
            next_j /= 10;
            }
        }
        if(sum == 0){
            printf("No carry operation.\n");
        }
        else if(sum == 1){
            printf("1 carry operation.\n");
        }
        else{
            printf("%d carry operations.\n",sum);
        }
    }
    return 0;
}