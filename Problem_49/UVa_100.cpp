#include <stdio.h>
#include <math.h>
int cycle_length(int n){
    int sum = 1;
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
            sum++;
        }
        else{
            n = 3*n + 1;
            sum++;
        }
    }
    return sum;
}
int main(){
    int i,j;
    while(scanf("%d""%d",&i,&j)!=EOF){
        int mini_number = (i<j)?i:j;
        int max_number = (i>j)?i:j;
        int max_length = 0;
        for(int a = mini_number;a <= max_number;a++){
            int sum = cycle_length(a);
            if(sum > max_length){
                max_length = sum;
            }
        }
        printf("%d %d %d\n",i,j,max_length);
    }
    return 0;
}