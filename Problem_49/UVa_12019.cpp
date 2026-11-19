#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int M,D;
        int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        int total_days = 1;
        char week[7][15] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        scanf("%d %d",&M,&D);
        for(int i = 0;i <= M - 1;i++){
            total_days += days[i];
        }
        total_days += D-1;
        printf("%s\n",week[(5+total_days)%7]);
    }
    return 0;
}