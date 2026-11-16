#include <stdio.h>
#include <math.h>

int main(){
    long long i,j;
    while(scanf("%lld""%lld",&i,&j)!=EOF){
        if(i>j){
            printf("%lld\n",i-j);
        }
        else{
            printf("%lld\n",j-i);
        }
    }
    return 0;
}